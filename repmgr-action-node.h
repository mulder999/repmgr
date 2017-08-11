/*
 * repmgr-action-node.h
 * Copyright (c) 2ndQuadrant, 2010-2017
 */

#ifndef _REPMGR_ACTION_NODE_H_
#define _REPMGR_ACTION_NODE_H_

extern void do_node_status(void);
extern void do_node_check(void);
extern CheckStatus do_node_check_archiver(PGconn *conn, OutputMode mode, PQExpBufferData *output);
extern CheckStatus do_node_check_replication_lag(PGconn *conn, OutputMode mode, PQExpBufferData *output);

extern void do_node_rejoin(void);
extern void do_node_service(void);



#endif /* _REPMGR_ACTION_NODE_H_ */