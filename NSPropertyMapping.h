/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSArray, NSString, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject  {
    void *_reserved;
    void *_reserved1;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    struct __propertyMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedPropertyMapping : 31; 
    } _propertyMappingFlags;
}

+ (void)initialize;

- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_throwIfNotEditable;
- (void)_setPropertyTransforms:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (id)valueExpression;
- (id)_propertyTransforms;
- (BOOL)isEditable;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)userInfo;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end