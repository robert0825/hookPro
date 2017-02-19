//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ItemExtensionListCellClickProtocol-Protocol.h"
#import "SearchCellController-Protocol.h"

@class NSString, TMViewController, UICollectionView;
@protocol TMSearchResultsVMProtocol;

@interface ItemExtensionCellController : UIViewController <ItemExtensionListCellClickProtocol, SearchCellController>
{
    TMViewController *contentController;	// 8 = 0x8
    id <TMSearchResultsVMProtocol> viewModel;	// 16 = 0x10
    UICollectionView *collectionView;	// 24 = 0x18
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak id <TMSearchResultsVMProtocol> viewModel; // @synthesize viewModel;
@property(nonatomic) __weak TMViewController *contentController; // @synthesize contentController;
- (void).cxx_destruct;
- (void)clickAtIndex:(long long)arg1 content:(id)arg2;
- (Class)supportDataType;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
