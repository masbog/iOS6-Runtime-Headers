/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate  {
    unsigned int refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (id)dateWithYear:(int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6 timeZone:(id)arg7;
+ (id)calendarDate;
+ (id)distantPast;
+ (id)distantFuture;

- (id)init;
- (void)dealloc;
- (id)timeZone;
- (id)addTimeInterval:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)descriptionWithLocale:(id)arg1;
- (oneway void)release;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (void)years:(int*)arg1 months:(int*)arg2 days:(int*)arg3 hours:(int*)arg4 minutes:(int*)arg5 seconds:(int*)arg6 sinceDate:(id)arg7;
- (id)dateByAddingYears:(int)arg1 months:(int)arg2 days:(int)arg3 hours:(int)arg4 minutes:(int)arg5 seconds:(int)arg6;
- (int)microsecondOfSecond;
- (int)secondOfMinute;
- (int)minuteOfHour;
- (int)hourOfDay;
- (int)dayOfYear;
- (int)dayOfWeek;
- (int)dayOfMonth;
- (int)monthOfYear;
- (int)yearOfCommonEra;
- (int)dayOfCommonEra;
- (id)timeZoneDetail;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)calendarFormat;
- (id)initWithYear:(int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6 timeZone:(id)arg7;
- (void)setCalendarFormat:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ekmsuidStringForYearMonthDay;
- (id)ekmsuidGMTDateToDateInTimeZone:(id)arg1;

@end
