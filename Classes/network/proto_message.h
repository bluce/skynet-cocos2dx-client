#ifndef _MESSAGE_H_
#define _MESSAGE_H_

//��16λ��Ϣ��  ��16λģ���

enum ProtoMessage
{
	//Login
	MSG_PLAYER_LOGIN_C2S		= 0x00010001,	//��ҵ�½����
	MSG_PLAYER_LOGIN_S2C		= 0x00010002,	//��ҵ�½��Ӧ
};

#endif