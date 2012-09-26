/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData;

@interface FTIDSMessage : FTMessage <NSCopying> {
    NSData *_pushCert;
    struct __SecKey { } *_pushKey;
    struct __SecKey { } *_identityKey;
    NSData *_identityCert;
    struct __SecKey { } *_provisionKey;
    NSData *_provisionCert;
    struct __SecKey { } *_pushPublicKey;
    struct __SecKey { } *_provisionPublicKey;
    struct __SecKey { } *_identityPublicKey;
    NSData *_pushToken;
}

@property struct __SecKey { }* pushPrivateKey;
@property struct __SecKey { }* pushPublicKey;
@property(copy) NSData * pushCertificate;
@property(copy) NSData * pushToken;
@property struct __SecKey { }* provisionPrivateKey;
@property struct __SecKey { }* provisionPublicKey;
@property(copy) NSData * provisionCertificate;
@property struct __SecKey { }* identityPrivateKey;
@property struct __SecKey { }* identityPublicKey;
@property(copy) NSData * IDCertificate;


- (void)setProvisionPublicKey:(struct __SecKey { }*)arg1;
- (void)setProvisionPrivateKey:(struct __SecKey { }*)arg1;
- (void)setProvisionCertificate:(id)arg1;
- (void)setIdentityPublicKey:(struct __SecKey { }*)arg1;
- (void)setIdentityPrivateKey:(struct __SecKey { }*)arg1;
- (void)setIDCertificate:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setPushPublicKey:(struct __SecKey { }*)arg1;
- (void)setPushPrivateKey:(struct __SecKey { }*)arg1;
- (void)setPushCertificate:(id)arg1;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (int)command;
- (id)IDCertificate;
- (struct __SecKey { }*)identityPublicKey;
- (struct __SecKey { }*)identityPrivateKey;
- (id)provisionCertificate;
- (struct __SecKey { }*)provisionPublicKey;
- (struct __SecKey { }*)provisionPrivateKey;
- (id)pushToken;
- (id)pushCertificate;
- (struct __SecKey { }*)pushPublicKey;
- (struct __SecKey { }*)pushPrivateKey;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBinaryPush;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end