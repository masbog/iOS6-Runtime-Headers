/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOHours : PBCodable  {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _days;
    NSMutableArray *_timeRanges;
}

@property(readonly) unsigned int daysCount;
@property(readonly) int* days;
@property(retain) NSMutableArray * timeRanges;


- (int*)days;
- (id)timeRanges;
- (void)setDays:(int*)arg1 count:(unsigned int)arg2;
- (id)timeRangeAtIndex:(unsigned int)arg1;
- (void)clearTimeRanges;
- (unsigned int)timeRangesCount;
- (void)addDay:(int)arg1;
- (int)dayAtIndex:(unsigned int)arg1;
- (void)clearDays;
- (unsigned int)daysCount;
- (void)addTimeRange:(id)arg1;
- (void)setTimeRanges:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
