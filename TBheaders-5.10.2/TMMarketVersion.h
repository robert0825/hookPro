//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TMMarketVersion : NSObject
{
    NSString *_version;	// 8 = 0x8
}

@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;

@end
