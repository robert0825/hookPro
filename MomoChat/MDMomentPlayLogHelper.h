//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDAPICached, NSMutableArray, NSString;

@interface MDMomentPlayLogHelper : NSObject
{
    _Bool _isEnableUpLoad;
    NSString *_videoId;
    double _videoDuration;
    double _playedDuration;
    double _bufferStartStamp;
    double _bufferEndStamp;
    long long _isFirstBuffer;
    NSMutableArray *_bufferStampArray;
    MDAPICached *_apiCache;
}

+ (id)sharedHelper;
@property(retain, nonatomic) MDAPICached *apiCache; // @synthesize apiCache=_apiCache;
@property(nonatomic) _Bool isEnableUpLoad; // @synthesize isEnableUpLoad=_isEnableUpLoad;
@property(retain, nonatomic) NSMutableArray *bufferStampArray; // @synthesize bufferStampArray=_bufferStampArray;
@property(nonatomic) long long isFirstBuffer; // @synthesize isFirstBuffer=_isFirstBuffer;
@property(nonatomic) double bufferEndStamp; // @synthesize bufferEndStamp=_bufferEndStamp;
@property(nonatomic) double bufferStartStamp; // @synthesize bufferStartStamp=_bufferStartStamp;
@property(nonatomic) double playedDuration; // @synthesize playedDuration=_playedDuration;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)uploadLogWithPlayerDataDict:(id)arg1;
- (void)logBufferStartAndEndEvent;
- (void)resetLogRecord;

@end
