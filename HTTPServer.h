/* Generated by RuntimeBrowser.
   Image: /Users/steipete/Library/Application Support/iPhone Simulator/6.0/Applications/169BE991-A55A-4056-B56F-2FCCE879D4E7/OCRuntime.app/OCRuntime
 */

@class GCDAsyncSocket, NSObject<OS_dispatch_queue>, NSMutableArray, NSLock, NSDictionary, NSString, NSNetService;

@interface HTTPServer : NSObject <NSNetServiceDelegate> {
    NSObject<OS_dispatch_queue> *serverQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
    GCDAsyncSocket *asyncSocket;
    NSString *documentRoot;
    Class connectionClass;
    NSString *interface;
    unsigned short port;
    NSNetService *netService;
    NSString *domain;
    NSString *type;
    NSString *name;
    NSString *publishedName;
    NSDictionary *txtRecordDictionary;
    NSMutableArray *connections;
    NSMutableArray *webSockets;
    NSLock *connectionsLock;
    NSLock *webSocketsLock;
    BOOL isRunning;
}

+ (void)performBonjourBlock:(id)arg1;
+ (void)bonjourThread;
+ (void)startBonjourThreadIfNeeded;
+ (void)performBonjourBlock:(id)arg1 waitUntilDone:(BOOL)arg2;

- (void)setPort:(unsigned short)arg1;
- (void)setType:(id)arg1;
- (id)init;
- (void)dealloc;
- (unsigned short)port;
- (id)name;
- (id)domain;
- (BOOL)isRunning;
- (void)setInterface:(id)arg1;
- (id)interface;
- (void)netServiceDidPublish:(id)arg1;
- (id)type;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (BOOL)stop;
- (void)setName:(id)arg1;
- (void)republishBonjour;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (unsigned int)numberOfWebSocketConnections;
- (unsigned int)numberOfHTTPConnections;
- (void)setTXTRecordDictionary:(id)arg1;
- (id)TXTRecordDictionary;
- (id)publishedName;
- (void)setDomain:(id)arg1;
- (unsigned short)listeningPort;
- (void)setConnectionClass:(Class)arg1;
- (Class)connectionClass;
- (void)setDocumentRoot:(id)arg1;
- (void)unpublishBonjour;
- (void)publishBonjour;
- (void)webSocketDidDie:(id)arg1;
- (void)connectionDidDie:(id)arg1;
- (id)config;
- (id)documentRoot;
- (void)addWebSocket:(id)arg1;
- (BOOL)start:(id*)arg1;

@end
