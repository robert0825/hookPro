//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FlightListResponseModel : NSObject
{
    int rowCount;
    NSMutableArray *flightInfoList;
    NSMutableArray *filterTypeArray;
}

@property(retain, nonatomic) NSMutableArray *filterTypeArray; // @synthesize filterTypeArray;
@property(retain, nonatomic) NSMutableArray *flightInfoList; // @synthesize flightInfoList;
@property(nonatomic) int rowCount; // @synthesize rowCount;
- (void)dealloc;
- (id)init;

@end
