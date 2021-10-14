#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc344af18, "drm_release" },
	{ 0x563dd3a3, "sync_file_create" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x384725f9, "drm_atomic_get_connector_state" },
	{ 0x34444d70, "ttm_pool_populate" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6de948c6, "ttm_bo_eviction_valuable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4e35b468, "ttm_tt_fini" },
	{ 0xa484f48, "ttm_dma_tt_init" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0xe27e3128, "drm_atomic_helper_suspend" },
	{ 0x4dca08ee, "sync_file_get_fence" },
	{ 0x53b954a2, "up_read" },
	{ 0x86e50109, "drm_atomic_helper_update_plane" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0x16e5b87d, "ttm_bo_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc8fbda02, "ttm_bo_swapout_all" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x29434677, "ttm_bo_put" },
	{ 0x754d539c, "strlen" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xdf611493, "drm_atomic_helper_resume" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0xc15767ec, "drm_modeset_drop_locks" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x6b392142, "ttm_bo_move_to_lru_tail" },
	{ 0x447ccb15, "drm_master_get" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xba3039d3, "drm_atomic_helper_page_flip" },
	{ 0x77a8b9f4, "drm_mode_destroy" },
	{ 0x5b7034aa, "__sg_alloc_table_from_pages" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x97a2d765, "ttm_bo_validate" },
	{ 0x36ad1990, "drm_property_create_range" },
	{ 0xe98d3b51, "ttm_bo_init" },
	{ 0x55358c6, "ttm_bo_synccpu_write_release" },
	{ 0x2710f212, "ttm_dma_unpopulate" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0x3a4e8eb4, "drm_modeset_backoff" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x4652e79e, "drm_event_reserve_init" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x16ac2597, "drm_printf" },
	{ 0xebc59434, "drm_vblank_init" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xa5b8a17e, "drm_encoder_init" },
	{ 0xa551733, "drm_modeset_acquire_fini" },
	{ 0x2041b891, "drm_object_property_set_value" },
	{ 0xae616bd2, "drm_connector_list_iter_next" },
	{ 0x70b28aa, "drm_ht_remove_item" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9f1cabdb, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xd5d3550f, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x13ce2e5d, "drm_universal_plane_init" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x9b0e771e, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa44721c6, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x89cbbe04, "ttm_bo_synccpu_write_grab" },
	{ 0xf8f7495d, "ttm_dma_populate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb3e43376, "drm_atomic_helper_set_config" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x26a29f8a, "dma_resv_wait_timeout_rcu" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xba061653, "drm_send_event_locked" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xa8cee1ff, "ttm_bo_add_to_lru" },
	{ 0x4c92e6b2, "__drm_atomic_helper_plane_reset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x2bec40d1, "drm_helper_mode_fill_fb_struct" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4f59052c, "drm_object_attach_property" },
	{ 0x334194f, "drm_mode_duplicate" },
	{ 0x3d71be18, "drm_crtc_init_with_planes" },
	{ 0xa6adf8fd, "drm_put_dev" },
	{ 0xbdc14038, "drm_atomic_helper_check_plane_state" },
	{ 0xdd67c5a9, "dma_buf_fd" },
	{ 0xda4da925, "ttm_mem_glob" },
	{ 0xffb7c514, "ida_free" },
	{ 0x91b117a8, "ttm_bo_kmap" },
	{ 0x66ca92dd, "dma_buf_put" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x8d01694e, "ttm_tt_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x95dbc76d, "drm_ht_create" },
	{ 0x422a90d3, "ttm_bo_evict_mm" },
	{ 0x1be9e0ed, "ww_mutex_lock" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xf1480ee1, "dma_buf_get" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x2f5c4ccc, "ttm_kunmap_atomic_prot" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xd5176a71, "ttm_eu_fence_buffer_objects" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xb245c251, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x752832c, "noop_llseek" },
	{ 0xce6fe5e6, "__drm_atomic_helper_connector_destroy_state" },
	{ 0x7169236d, "__drm_atomic_helper_connector_reset" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x57866ce0, "drm_event_cancel_free" },
	{ 0x98f4192d, "ttm_bo_init_mm" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd4522a95, "ttm_mem_global_free" },
	{ 0x3271e595, "ttm_bo_wait" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xd2188866, "ttm_bo_device_init" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xce807a25, "up_write" },
	{ 0x3ba17eab, "drm_ht_insert_item" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0fd0123, "fput" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x44403596, "drm_connector_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x62b61dd4, "drm_modeset_lock" },
	{ 0x9b008fc4, "drm_atomic_helper_dirtyfb" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xbbd63439, "ttm_eu_backoff_reservation" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd152c21c, "drm_plane_cleanup" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8563a554, "drm_ht_remove" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd94f3fb8, "drm_connector_list_iter_end" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0x5c06660c, "dma_buf_export" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0x5d9342e0, "ttm_bo_del_sub_from_lru" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0x830cff03, "ttm_mem_global_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd42c9416, "drm_atomic_helper_damage_iter_init" },
	{ 0xbfe82994, "ttm_bo_kunmap" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3b1ef69b, "drm_get_pci_dev" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x21576f3c, "drm_sysfs_hotplug_event" },
	{ 0xef4a9ea9, "drm_master_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0xb5e5c757, "drm_mode_object_put" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x57b6efe3, "drm_ioctl_flags" },
	{ 0x7c99a584, "ttm_eu_reserve_buffers" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xa0713087, "drm_ht_find_item" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4d924f20, "memremap" },
	{ 0x411c126c, "drm_modeset_acquire_init" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x90b695aa, "drm_connector_unregister" },
	{ 0xc92f5b0c, "drm_encoder_cleanup" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc4c503e9, "fb_deferred_io_cleanup" },
	{ 0xe82c0073, "fb_deferred_io_init" },
	{ 0x2e204eff, "ttm_bo_device_release" },
	{ 0x29d3685d, "drm_connector_list_iter_begin" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0xe1dbad95, "drm_crtc_cleanup" },
	{ 0x6a89746f, "ttm_bo_mem_compat" },
	{ 0xc50901e2, "drm_atomic_helper_crtc_destroy_state" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x5fa3fbaf, "drm_mode_create_suggested_offset_properties" },
	{ 0xdccabc29, "ttm_dma_tt_fini" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x5c8b5637, "fd_install" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6052860c, "ttm_round_pot" },
	{ 0x3dbd6e75, "ww_mutex_unlock" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1d12fd6e, "drm_mm_insert_node_in_range" },
	{ 0x61ba9c71, "drm_framebuffer_lookup" },
	{ 0x7934c628, "drm_atomic_helper_shutdown" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x76c1fd24, "drm_modeset_lock_all" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0x1c1b0585, "ttm_io_prot" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x91c32917, "drm_atomic_helper_disable_plane" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3107bc2, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e5b8e14, "ttm_bo_manager_func" },
	{ 0x6654dc34, "drm_modeset_unlock_all" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x409d6b5, "drm_plane_enable_fb_damage_clips" },
	{ 0x2c706892, "drm_framebuffer_init" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0xe81dfea1, "ttm_pool_unpopulate" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xbbdcd391, "drm_connector_register" },
	{ 0x20978fb9, "idr_find" },
	{ 0xf1af984b, "dma_resv_add_excl_fence" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xba946493, "ttm_bo_clean_mm" },
	{ 0x6b73e00b, "ttm_kmap_atomic_prot" },
	{ 0xbdc42f20, "drm_mode_crtc_set_gamma_size" },
	{ 0xe03a689d, "dma_fence_array_ops" },
	{ 0x65c824e4, "drm_mode_object_find" },
	{ 0xed4bb72b, "drm_connector_list_update" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x426abb86, "ww_mutex_lock_interruptible" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0x3be4dd16, "drm_is_current_master" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xa9d22e3e, "drm_atomic_helper_plane_destroy_state" },
	{ 0x5955b596, "drm_framebuffer_cleanup" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xfce82111, "ttm_bo_mmap" },
};

MODULE_INFO(depends, "drm,ttm,drm_kms_helper");

MODULE_ALIAS("pci:v000015ADd00000405sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1A75CD0C870E42D452D1D08");
