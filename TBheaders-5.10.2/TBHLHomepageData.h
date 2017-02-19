//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSString, TBHLBaseData;

@interface TBHLHomepageData : NSObject
{
    TBHLBaseData *_baseData;	// 8 = 0x8
    NSCache *_tableViewData;	// 16 = 0x10
    NSString *_timeStamp;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSCache *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(retain, nonatomic) TBHLBaseData *baseData; // @synthesize baseData=_baseData;
- (void).cxx_destruct;
- (id)getBaseData;
- (id)getHomeTableData;
- (id)getColumnData:(id)arg1;
- (void)addFeed:(id)arg1;
- (id)getFeedById:(id)arg1;
- (id)init;

@end
