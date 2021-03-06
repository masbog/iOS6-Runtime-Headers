/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@class NSArray, NSString, MSAsset, NSData;

@interface MSAssetCollection : NSObject <NSCoding> {
    NSString *_assetCollectionID;
    NSString *_ctag;
    MSAsset *_masterAsset;
    NSArray *_derivedAssets;
    NSString *_fileName;
    BOOL _wasDeleted;
}

@property(retain) NSString * assetCollectionID;
@property(retain) NSString * ctag;
@property(retain) MSAsset * masterAsset;
@property(readonly) NSData * masterAssetHash;
@property(retain) NSArray * derivedAssets;
@property(retain) NSString * fileName;
@property BOOL wasDeleted;

+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2;

- (void)setWasDeleted:(BOOL)arg1;
- (void)setMasterAsset:(id)arg1;
- (void)setDerivedAssets:(id)arg1;
- (id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
- (void)setCtag:(id)arg1;
- (BOOL)wasDeleted;
- (id)ctag;
- (id)derivedAssets;
- (id)masterAsset;
- (id)masterAssetHash;
- (void)setAssetCollectionID:(id)arg1;
- (id)assetCollectionID;
- (void)setFileName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;

@end
