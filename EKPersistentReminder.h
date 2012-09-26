/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, EKObjectID, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem  {
    EKObjectID *_parentID;
}

@property(copy) NSDate * dueDate;
@property(copy) NSTimeZone * dueDateTimeZone;
@property BOOL dueDateAllDay;
@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completionDate;
@property unsigned int displayOrder;
@property(copy) EKObjectID * parentID;

+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;

- (BOOL)isCompleted;
- (BOOL)validate:(id*)arg1;
- (void)setDueDateAllDay:(BOOL)arg1;
- (void)setDueDateTimeZone:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (BOOL)dueDateAllDay;
- (id)dueDateTimeZone;
- (id)dueDate;
- (void)_sendModifiedNote;
- (id)externalURI;
- (void)setDisplayOrder:(unsigned int)arg1;
- (unsigned int)displayOrder;
- (void)setCompleted:(BOOL)arg1;
- (int)entityType;
- (id)parentID;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end