//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKMTOPServer;

@interface CategoryMtopRequest : NSObject
{
    TBSDKMTOPServer *_mtopServer;	// 8 = 0x8
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelRequest;
- (void)getCategoryListFormSearch:(id)arg1 businessName:(id)arg2 area:(id)arg3 delegate:(id)arg4;

@end
