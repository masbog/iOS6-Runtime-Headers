/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCKeychain : NSObject  {
}

+ (BOOL)itemExistsInKeychain:(void*)arg1;
+ (void)removeItemWithPersistentID:(id)arg1;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6;
+ (void)removeStringForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5;
+ (void*)copyItemWithPersistentID:(id)arg1;
+ (struct __CFDictionary { }*)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5;
+ (void)removeDataForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 outError:(id*)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5;


@end
