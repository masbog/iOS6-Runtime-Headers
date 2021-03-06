/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSPropertyTransform, NSString, NSExpression;

@interface NSPropertyTransform : NSObject  {
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    BOOL _replaceMissingValueOnly;
}

@property(retain) NSString * propertyName;
@property(retain) NSExpression * valueExpression;
@property(retain) NSPropertyTransform * prerequisiteTransform;
@property BOOL replaceMissingValueOnly;


- (void)setPropertyName:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (void)setReplaceMissingValueOnly:(BOOL)arg1;
- (void)setPrerequisiteTransform:(id)arg1;
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;
- (id)valueExpression;
- (BOOL)replaceMissingValueOnly;
- (id)prerequisiteTransform;
- (id)propertyName;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
