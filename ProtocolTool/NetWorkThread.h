//*************************************************************************
// NetWorkThread.h 2016-8-5 16:27
// Author: Stonexin
// Purpose: 
//
//*************************************************************************

#ifndef PROTOCOL_THREAD_H__
#define PROTOCOL_THREAD_H__

#include <atomic>
#include <wx/thread.h>
#include <queue>
#include "NFINet.h"
class NFCNet;

const int ID_RECV_PROTOCOL_MSG = 100000;

struct NetMsg
{
	int16_t nMsgID;
	std::string strMsgData;
};


// a thread class that will periodically send events to the GUI thread
class NetWorkThread : public wxThread
{
	wxDialog* m_parent;
	std::atomic_bool m_bStop;
	std::atomic_int m_nState;

	NFCNet*	m_pNet;

	std::string m_strIP;
	unsigned short      m_nPort;

	wxMutex		m_Mutex;
	std::queue<NetMsg>	m_MsgList;

public:
	NetWorkThread(wxDialog* parent,const std::string& strIP,int nPort );

	void OnRecvMsgHandler(const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen);


	void OnSockEventHandler(const int nSockIndex, const NF_NET_EVENT e, NFINet* p);

	void SendMsg( int16_t nMsgID,const std::string& msgData );


	void Stop(){
		m_bStop = true;
	}

	virtual ExitCode Entry();
};


#endif // PROTOCOL_THREAD_H__
