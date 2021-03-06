//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary;

@interface TBSCKObject : NSObject
{
    NSMutableDictionary *_object;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableDictionary *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (unsigned long long)size;
- (_Bool)expired;
- (void)updateLifeDuration:(long long)arg1;
- (long long)expiredTimestamp;
- (id)value;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 andLifeDuration:(long long)arg2;

@end

