/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSData, GEOLocation, NSMutableArray, GEORouteAttributes;

@interface GEODirectionsRequest : PBRequest  {
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    unsigned int _maxRouteCount;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_serviceTags;
    unsigned int _timeSinceLastRerouteRequest;
    NSMutableArray *_waypoints;
    struct { 
        unsigned int departureTime : 1; 
        unsigned int maxRouteCount : 1; 
        unsigned int timeSinceLastRerouteRequest : 1; 
    } _has;
}

@property(readonly) BOOL hasRouteAttributes;
@property(retain) GEORouteAttributes * routeAttributes;
@property(retain) NSMutableArray * waypoints;
@property BOOL hasMaxRouteCount;
@property unsigned int maxRouteCount;
@property(readonly) BOOL hasCurrentUserLocation;
@property(retain) GEOLocation * currentUserLocation;
@property(readonly) BOOL hasCurrentMapRegion;
@property(retain) GEOMapRegion * currentMapRegion;
@property(readonly) BOOL hasOriginalRouteID;
@property(retain) NSData * originalRouteID;
@property(readonly) BOOL hasOriginalRouteZilchPoints;
@property(retain) NSData * originalRouteZilchPoints;
@property BOOL hasTimeSinceLastRerouteRequest;
@property unsigned int timeSinceLastRerouteRequest;
@property BOOL hasDepartureTime;
@property int departureTime;
@property(retain) NSMutableArray * serviceTags;


- (id)serviceTags;
- (id)waypoints;
- (void)setHasDepartureTime:(BOOL)arg1;
- (void)setHasTimeSinceLastRerouteRequest:(BOOL)arg1;
- (void)setHasMaxRouteCount:(BOOL)arg1;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (void)clearServiceTags;
- (unsigned int)serviceTagsCount;
- (void)setDepartureTime:(int)arg1;
- (int)departureTime;
- (BOOL)hasDepartureTime;
- (void)setTimeSinceLastRerouteRequest:(unsigned int)arg1;
- (unsigned int)timeSinceLastRerouteRequest;
- (BOOL)hasTimeSinceLastRerouteRequest;
- (id)originalRouteZilchPoints;
- (BOOL)hasOriginalRouteZilchPoints;
- (id)originalRouteID;
- (BOOL)hasOriginalRouteID;
- (id)currentMapRegion;
- (BOOL)hasCurrentMapRegion;
- (id)currentUserLocation;
- (BOOL)hasCurrentUserLocation;
- (void)setMaxRouteCount:(unsigned int)arg1;
- (unsigned int)maxRouteCount;
- (BOOL)hasMaxRouteCount;
- (id)waypointAtIndex:(unsigned int)arg1;
- (void)clearWaypoints;
- (unsigned int)waypointsCount;
- (id)routeAttributes;
- (BOOL)hasRouteAttributes;
- (void)addServiceTag:(id)arg1;
- (void)addWaypoint:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setOriginalRouteZilchPoints:(id)arg1;
- (void)setOriginalRouteID:(id)arg1;
- (void)setCurrentMapRegion:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end