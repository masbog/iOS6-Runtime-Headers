/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayerInternal, NSString, GKGameInternal;

@interface GKAuthenticateResponse : GKResponse  {
    NSString *_accountName;
    NSString *_playerID;
    NSString *_authToken;
    GKGameInternal *_game;
    BOOL _sandboxed;
    BOOL _loginDisabled;
    BOOL _shouldUsePipelining;
    unsigned int _maxPlayersP2P;
    unsigned int _maxPlayersHosted;
    unsigned int _maxPlayersTurnBased;
    unsigned int _maxGameStateSizeTurnBased;
    GKPlayerInternal *_localPlayer;
}

@property(retain) NSString * accountName;
@property(retain) NSString * playerID;
@property(retain) NSString * authToken;
@property(retain) GKPlayerInternal * localPlayer;
@property(retain) GKGameInternal * game;
@property BOOL sandboxed;
@property BOOL loginDisabled;
@property BOOL shouldUsePipelining;
@property unsigned int maxPlayersP2P;
@property unsigned int maxPlayersHosted;
@property unsigned int maxPlayersTurnBased;
@property unsigned int maxGameStateSizeTurnBased;

+ (id)codedPropertyKeys;

- (void)setAccountName:(id)arg1;
- (id)accountName;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (void)setLocalPlayer:(id)arg1;
- (void)setShouldUsePipelining:(BOOL)arg1;
- (BOOL)shouldUsePipelining;
- (void)setLoginDisabled:(BOOL)arg1;
- (BOOL)loginDisabled;
- (BOOL)sandboxed;
- (void)setMaxGameStateSizeTurnBased:(unsigned int)arg1;
- (unsigned int)maxGameStateSizeTurnBased;
- (void)setMaxPlayersTurnBased:(unsigned int)arg1;
- (unsigned int)maxPlayersTurnBased;
- (void)setMaxPlayersHosted:(unsigned int)arg1;
- (unsigned int)maxPlayersHosted;
- (void)setMaxPlayersP2P:(unsigned int)arg1;
- (unsigned int)maxPlayersP2P;
- (void)setSandboxed:(BOOL)arg1;
- (id)localPlayer;
- (void)setGame:(id)arg1;
- (id)game;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (void)dealloc;
- (id)description;

@end