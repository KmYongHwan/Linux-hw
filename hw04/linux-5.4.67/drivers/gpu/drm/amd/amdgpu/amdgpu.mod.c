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
	{ 0x792a04b, "pm_genpd_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x48b62a57, "drm_dp_link_train_channel_eq_delay" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x8910616f, "drm_atomic_get_private_obj_state" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x12042686, "drm_fb_helper_debug_enter" },
	{ 0x4d825edf, "drm_gem_map_dma_buf" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x85df9b6c, "strsep" },
	{ 0xba90a6eb, "drm_fb_helper_cfb_copyarea" },
	{ 0x7158a176, "drm_kms_helper_hotplug_event" },
	{ 0xbb756a47, "drm_atomic_private_obj_fini" },
	{ 0xa2393307, "drm_helper_resume_force_mode" },
	{ 0x17515c67, "drm_kms_helper_poll_fini" },
	{ 0xaf3d9208, "drm_sched_increase_karma" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1e09361b, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0xedc03953, "iounmap" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x338a5c40, "drm_crtc_vblank_get" },
	{ 0xa071f2c6, "single_release" },
	{ 0x2fc2002b, "simple_attr_read" },
	{ 0x7f88521, "drm_edid_is_valid" },
	{ 0xc8734d8, "dma_resv_reserve_shared" },
	{ 0xd05b88ad, "drm_syncobj_find" },
	{ 0x6f53da0e, "remove_conflicting_pci_framebuffers" },
	{ 0xffb7c514, "ida_free" },
	{ 0x912411c6, "drm_connector_set_vrr_capable_property" },
	{ 0x89d0d600, "__irq_domain_add" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2479f8dc, "drm_syncobj_replace_fence" },
	{ 0xe1002eb2, "drm_gem_map_attach" },
	{ 0x46e0989, "ttm_tt_set_placement_caching" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x67206c2a, "drm_dev_dbg" },
	{ 0x76c1fd24, "drm_modeset_lock_all" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9464724b, "pci_bus_resource_n" },
	{ 0x754d539c, "strlen" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x679ecdd0, "get_pid_task" },
	{ 0x78adaa4e, "drm_gem_fb_create_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3f5ce95b, "drm_handle_vblank" },
	{ 0x1e1a8de, "kgdb_breakpoint" },
	{ 0x8737962, "seq_write" },
	{ 0xf68e18d0, "drm_kms_helper_poll_disable" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe484e35f, "ioread32" },
	{ 0x297bafd4, "sysfs_remove_file_ns" },
	{ 0x6b392142, "ttm_bo_move_to_lru_tail" },
	{ 0x36ad1990, "drm_property_create_range" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xb245c251, "drm_read" },
	{ 0x38e5699b, "drm_sched_entity_fini" },
	{ 0x88e96942, "device_create" },
	{ 0x66414bc7, "__class_create" },
	{ 0x3d71be18, "drm_crtc_init_with_planes" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xeaeec424, "backlight_force_update" },
	{ 0x18f20ea0, "drm_sched_fini" },
	{ 0xd5d3550f, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3cbd29c0, "pci_enable_atomic_ops_to_root" },
	{ 0x65c824e4, "drm_mode_object_find" },
	{ 0xf6556ca9, "drm_fb_helper_init" },
	{ 0x9a884d5f, "drm_helper_connector_dpms" },
	{ 0x794101b4, "pci_platform_rom" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x4db77591, "component_add" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x2a67aba5, "drm_crtc_vblank_put" },
	{ 0xc1f7d72c, "amd_iommu_set_invalid_ppr_cb" },
	{ 0xa8ad5d01, "drm_detect_hdmi_monitor" },
	{ 0x45f919dd, "drm_dp_cec_irq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0xb9560d7f, "drm_crtc_helper_set_config" },
	{ 0xb3e43376, "drm_atomic_helper_set_config" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x53a4b685, "drm_framebuffer_unregister_private" },
	{ 0x2710f212, "ttm_dma_unpopulate" },
	{ 0x5955b596, "drm_framebuffer_cleanup" },
	{ 0x76da24f6, "dma_get_required_mask" },
	{ 0x74b2e11c, "drm_gem_private_object_init" },
	{ 0x6087403, "pci_assign_unassigned_bus_resources" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x38402a73, "drm_dp_cec_set_edid" },
	{ 0x12d61d34, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x21a97444, "drm_prime_pages_to_sg" },
	{ 0xf088322, "drm_dev_register" },
	{ 0xee3ffbf5, "pci_release_resource" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xae616bd2, "drm_connector_list_iter_next" },
	{ 0xaa8a9c97, "request_firmware_direct" },
	{ 0x1d12fd6e, "drm_mm_insert_node_in_range" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa2a2b6f6, "drm_fb_helper_cfb_imageblit" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x15188f60, "drm_crtc_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0xfe5ffe4a, "drm_fb_helper_set_par" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0xa7f013f9, "drm_dev_printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb52b74ed, "drm_fb_helper_blank" },
	{ 0x11b079dd, "drm_dp_check_act_status" },
	{ 0xc324efb9, "drm_edid_to_sad" },
	{ 0x7e27865, "drm_gem_map_detach" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x96ee549f, "irq_domain_remove" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xeb3bb858, "pm_genpd_remove_device" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xa5b8a17e, "drm_encoder_init" },
	{ 0x35afae24, "__drm_puts_seq_file" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x1b69c9ce, "drm_sched_entity_destroy" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x637e69bb, "drm_dp_mst_detect_port" },
	{ 0xf3124815, "drm_fb_helper_lastclose" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7952db4, "drm_fb_helper_set_suspend_unlocked" },
	{ 0x5d2f4e2d, "drm_plane_create_color_properties" },
	{ 0xc3511e78, "pci_resize_resource" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeec76af8, "drm_dp_cec_register_connector" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0xfe12bcb9, "drm_dsc_compute_rc_parameters" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0xbf35eed, "drm_gem_object_put_unlocked" },
	{ 0x8408dbfc, "kthread_unpark" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x5e67f327, "drm_helper_force_disable_all" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x422a90d3, "ttm_bo_evict_mm" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0xf421d8ea, "amd_iommu_init_device" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xc344af18, "drm_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7cf40c31, "drm_dp_mst_hpd_irq" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe1943357, "amd_iommu_unbind_pasid" },
	{ 0x270805fc, "drm_vma_node_allow" },
	{ 0xa0798880, "get_task_pid" },
	{ 0xd05a4f64, "drm_crtc_accurate_vblank_count" },
	{ 0x454d2bf6, "drm_syncobj_get_fd" },
	{ 0xbbdcd391, "drm_connector_register" },
	{ 0x66984dba, "send_sig" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x1000e51, "schedule" },
	{ 0x575aa5ac, "drm_modeset_unlock" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x1d7b5e2b, "drm_helper_disable_unused_functions" },
	{ 0x72f80faa, "drm_kms_helper_poll_enable" },
	{ 0x322d6ef6, "drm_dp_mst_put_port_malloc" },
	{ 0xa9d22e3e, "drm_atomic_helper_plane_destroy_state" },
	{ 0x8fc7e46d, "drm_atomic_helper_async_check" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xede283d, "release_firmware" },
	{ 0xba061653, "drm_send_event_locked" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0xd3119e59, "drm_atomic_state_alloc" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x4d4438ff, "iommu_get_domain_for_dev" },
	{ 0xb15ab250, "dma_fence_array_create" },
	{ 0x91b117a8, "ttm_bo_kmap" },
	{ 0x9a45a202, "drm_primary_helper_destroy" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xe1dbad95, "drm_crtc_cleanup" },
	{ 0x858ef8b8, "get_task_mm" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x26a29f8a, "dma_resv_wait_timeout_rcu" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x71aaadfc, "drm_dp_update_payload_part1" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xb1ee2cb, "drm_dp_update_payload_part2" },
	{ 0xc2bfdf20, "dma_resv_test_signaled_rcu" },
	{ 0xe27e3128, "drm_atomic_helper_suspend" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xdd623a59, "drm_dp_aux_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xba312d7b, "current_task" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xb6127243, "drm_need_swiotlb" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x244d8dd2, "drm_dp_mst_topology_mgr_resume" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x45db69a7, "drm_atomic_add_affected_planes" },
	{ 0x7b71eb, "drm_add_modes_noedid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa7359bd6, "drm_sched_entity_set_priority" },
	{ 0xa9e2d0ce, "perf_pmu_register" },
	{ 0x117adf18, "put_pid" },
	{ 0xa7a4258e, "drm_fb_helper_cfb_fillrect" },
	{ 0x20645642, "drm_debug" },
	{ 0x50413763, "dma_resv_add_shared_fence" },
	{ 0x9f1cabdb, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0xd262dfcb, "vscnprintf" },
	{ 0x34cd4c08, "drm_gem_dmabuf_vunmap" },
	{ 0xad7881a1, "hmm_mirror_register" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf979e3be, "drm_dp_mst_topology_mgr_init" },
	{ 0xa3e91a34, "drm_dp_mst_get_edid" },
	{ 0x7b3c31dc, "drm_crtc_enable_color_mgmt" },
	{ 0x13ce2e5d, "drm_universal_plane_init" },
	{ 0x1cd01632, "drm_connector_init_with_ddc" },
	{ 0x5c8b5637, "fd_install" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc04c0275, "simple_attr_write" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9a0142ff, "sysfs_remove_file_from_group" },
	{ 0x72add5d0, "vga_remove_vgacon" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x75c0bf03, "handle_simple_irq" },
	{ 0x3fa11c6, "drm_mode_is_420_only" },
	{ 0xc12c4f0, "drm_gem_object_lookup" },
	{ 0xf11a9792, "drm_atomic_helper_commit_hw_done" },
	{ 0x1ecd3c0b, "drm_dp_dpcd_read" },
	{ 0xee3124a4, "sg_alloc_table_from_pages" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5576c674, "hmm_range_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x29d3685d, "drm_connector_list_iter_begin" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc833597a, "pci_ignore_hotplug" },
	{ 0xbfce8b8a, "drm_fb_helper_initial_config" },
	{ 0xdf3a8caf, "drm_dp_dpcd_write" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x4714bdcc, "drm_dp_cec_unset_edid" },
	{ 0x23409eee, "ttm_bo_bulk_move_lru_tail" },
	{ 0x4f59052c, "drm_object_attach_property" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0xce6fe5e6, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xfdfb792f, "amd_iommu_pc_supported" },
	{ 0x1e81f408, "ttm_bo_dma_acc_size" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x46c47fb6, "__node_distance" },
	{ 0x7c99a584, "ttm_eu_reserve_buffers" },
	{ 0xa39e3786, "drm_sched_start" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xc92f5b0c, "drm_encoder_cleanup" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x6c7a31e2, "drm_gem_unmap_dma_buf" },
	{ 0xbfe82994, "ttm_bo_kunmap" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x931a1960, "ttm_bo_unlock_delayed_workqueue" },
	{ 0x92c5efd2, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0xf7a2d718, "drm_mode_create_scaling_mode_property" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0x22c481dc, "ttm_fbdev_mmap" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0xc32b3447, "pm_genpd_add_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x288b9aba, "ttm_unmap_and_unpopulate_pages" },
	{ 0xc2ad51cc, "drm_atomic_helper_legacy_gamma_set" },
	{ 0x74523f34, "drm_crtc_add_crc_entry" },
	{ 0xdf5890e1, "ttm_tt_bind" },
	{ 0xb25852c0, "sysfs_add_file_to_group" },
	{ 0x2e204eff, "ttm_bo_device_release" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xcd0e4f76, "use_mm" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf1af984b, "dma_resv_add_excl_fence" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xb70f1c44, "drm_dev_unplug" },
	{ 0x1162e37d, "drm_dp_mst_allocate_vcpi" },
	{ 0xbf0c6ca0, "hmm_range_unregister" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x1817a846, "to_drm_sched_fence" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xcec6343e, "seq_read" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfce82111, "ttm_bo_mmap" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x16c66718, "drm_match_cea_mode" },
	{ 0x8bbeb99d, "drm_gem_dmabuf_release" },
	{ 0x5a4734d1, "drm_kms_helper_is_poll_worker" },
	{ 0x4c92e6b2, "__drm_atomic_helper_plane_reset" },
	{ 0x6b58779e, "drm_dp_find_vcpi_slots" },
	{ 0x987b2394, "drm_dp_mst_dump_topology" },
	{ 0x2e627e5f, "pcie_get_speed_cap" },
	{ 0xc307a10c, "drm_mm_takedown" },
	{ 0xa4e2ae60, "drm_fb_helper_fill_info" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0x61509273, "drm_gem_prime_import" },
	{ 0xab75265c, "irq_set_chip_and_handler_name" },
	{ 0x5c877931, "find_vma" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0x1a0b6fc4, "ttm_dma_page_alloc_debugfs" },
	{ 0xdccabc29, "ttm_dma_tt_fini" },
	{ 0x5fd43696, "drm_vma_node_revoke" },
	{ 0x9ade8092, "hmm_range_fault" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5f592f1d, "pcie_capability_read_dword" },
	{ 0x252f8658, "drm_fb_helper_ioctl" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x3ce2ca2d, "drm_atomic_helper_check_modeset" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x139f30b9, "drm_dp_cec_unregister_connector" },
	{ 0x5cc3787, "drm_kms_helper_poll_init" },
	{ 0x1645bbc9, "node_data" },
	{ 0x8cd1f841, "drm_dp_stop_crc" },
	{ 0x384725f9, "drm_atomic_get_connector_state" },
	{ 0xa50ec423, "vga_client_register" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x20978fb9, "idr_find" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x34d5237f, "drm_dp_mst_topology_mgr_suspend" },
	{ 0xede2149c, "drm_color_lut_extract" },
	{ 0x97767442, "vga_switcheroo_fini_domain_pm_ops" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf1480ee1, "dma_buf_get" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xebc59434, "drm_vblank_init" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xadf3747, "drm_sched_resubmit_jobs" },
	{ 0x9166fada, "strncpy" },
	{ 0x44403596, "drm_connector_init" },
	{ 0x95f3879f, "drm_gem_fb_destroy" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x4ea14d1a, "amd_iommu_free_device" },
	{ 0x12f57959, "drm_debugfs_create_files" },
	{ 0xa0fd0123, "fput" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x212f4a13, "ttm_bo_lock_delayed_workqueue" },
	{ 0x668b19a1, "down_read" },
	{ 0x29434677, "ttm_bo_put" },
	{ 0x4a00c723, "drm_plane_create_alpha_property" },
	{ 0xbace17cf, "pid_task" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xb13f8f73, "__get_task_comm" },
	{ 0x7934c628, "drm_atomic_helper_shutdown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6af9ad1a, "drm_calc_vbltimestamp_from_scanoutpos" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x90b695aa, "drm_connector_unregister" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x2ceef246, "component_del" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0xd963805c, "drm_connector_attach_max_bpc_property" },
	{ 0xbbd63439, "ttm_eu_backoff_reservation" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x944c43f, "node_states" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xca391157, "ttm_bo_move_accel_cleanup" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x481d4452, "vga_switcheroo_init_domain_pm_ops" },
	{ 0x226fded2, "pcie_bandwidth_available" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x1a63af34, "vga_switcheroo_process_delayed_switch" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x180cfb56, "drm_atomic_helper_cleanup_planes" },
	{ 0xe35580fb, "fget" },
	{ 0xfe50ef42, "bus_find_device" },
	{ 0x53bcd16, "ttm_page_alloc_debugfs" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4995f35f, "drm_sched_job_cleanup" },
	{ 0xa86e066c, "drm_syncobj_get_handle" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x1f58e882, "platform_bus_type" },
	{ 0xd89dc599, "hmm_mirror_unregister" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xa3107bc2, "drm_mode_probed_add" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x1be9e0ed, "ww_mutex_lock" },
	{ 0x2c706892, "drm_framebuffer_init" },
	{ 0x33f0768c, "cpufreq_quick_get_max" },
	{ 0xf880b830, "drm_dp_aux_register" },
	{ 0x7897e410, "mmput" },
	{ 0xb479d373, "drm_sched_stop" },
	{ 0xb26bf25d, "drm_mode_set_crtcinfo" },
	{ 0x3242dfa5, "drm_connector_set_path_property" },
	{ 0x38022172, "amd_iommu_set_invalidate_ctx_cb" },
	{ 0xc6b8d25, "drm_atomic_helper_check_planes" },
	{ 0x51d58e8, "dma_fence_wait_any_timeout" },
	{ 0xa1bedd72, "amd_iommu_pc_get_max_counters" },
	{ 0xf8f7495d, "ttm_dma_populate" },
	{ 0xba3039d3, "drm_atomic_helper_page_flip" },
	{ 0xa9c72303, "amd_iommu_pc_get_max_banks" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xd65de8b4, "drm_atomic_get_plane_state" },
	{ 0x67d1bd2f, "drm_fb_helper_debug_leave" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x349cba85, "strchr" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xf822cbac, "ttm_bo_mem_space" },
	{ 0xe74bca70, "drm_dp_mst_connector_early_unregister" },
	{ 0x8f2b1e28, "drm_irq_install" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xa6ff9496, "drm_dp_link_train_clock_recovery_delay" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x5b2f27fb, "do_wait_intr" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0x37a0cba, "kfree" },
	{ 0x426abb86, "ww_mutex_lock_interruptible" },
	{ 0xefce1a63, "debugfs_create_file_unsafe" },
	{ 0x98d87b25, "pci_get_class" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xed30d8d9, "drm_syncobj_add_point" },
	{ 0x1709b155, "pcie_get_mps" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x245e4356, "drm_prime_sg_to_page_addr_arrays" },
	{ 0xd5176a71, "ttm_eu_fence_buffer_objects" },
	{ 0xc4142837, "seq_printf" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x1cfc7690, "drm_fb_helper_check_var" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x58d8fcaa, "drm_dsc_pps_payload_pack" },
	{ 0x97a2d765, "ttm_bo_validate" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x4bd2b91a, "drm_fb_helper_prepare" },
	{ 0x15d8aa41, "__drm_printfn_seq_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa47826e4, "drm_dp_calc_pbn_mode" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0x8109c6d8, "drm_gem_handle_create" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x16ac2597, "drm_printf" },
	{ 0xa0474274, "drm_dp_start_crc" },
	{ 0xb5e5c757, "drm_mode_object_put" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x789ba01e, "drm_helper_hpd_irq_event" },
	{ 0x81c1d15d, "drm_dp_mst_deallocate_vcpi" },
	{ 0x6e0bbabe, "drm_mm_print" },
	{ 0x5252993, "drm_atomic_helper_wait_for_flip_done" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xd94f3fb8, "drm_connector_list_iter_end" },
	{ 0xfe56d412, "drm_sched_entity_flush" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0xd2188866, "ttm_bo_device_init" },
	{ 0x40285d52, "drm_fb_helper_pan_display" },
	{ 0x807aaef9, "drm_sched_entity_init" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xea124bd1, "gcd" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xea7abc28, "vga_switcheroo_unregister_client" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2bec40d1, "drm_helper_mode_fill_fb_struct" },
	{ 0x4e0aa6fd, "dma_resv_get_fences_rcu" },
	{ 0x4ad54488, "sysfs_create_file_ns" },
	{ 0xfa09467, "mmu_notifier_register" },
	{ 0xca161191, "drm_dev_put" },
	{ 0x47178151, "pcie_set_readrq" },
	{ 0x6de948c6, "ttm_bo_eviction_valuable" },
	{ 0xfc1d23e9, "amd_iommu_bind_pasid" },
	{ 0x858a77e1, "drm_irq_uninstall" },
	{ 0xa04ba507, "drm_dp_dpcd_read_link_status" },
	{ 0xa916b694, "strnlen" },
	{ 0xbfcfa7fd, "drm_syncobj_find_fence" },
	{ 0x40e253ec, "vga_switcheroo_register_handler" },
	{ 0xa637b975, "dma_ops" },
	{ 0x5c179e46, "ttm_bo_mem_put" },
	{ 0x73011db0, "drm_dp_bw_code_to_link_rate" },
	{ 0x9b55ed4a, "pci_unmap_rom" },
	{ 0x152de699, "seq_hex_dump" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xce807a25, "up_write" },
	{ 0x53d39621, "drm_atomic_add_affected_connectors" },
	{ 0x40e1d018, "drm_crtc_vblank_off" },
	{ 0x91c32917, "drm_atomic_helper_disable_plane" },
	{ 0x7734392, "perf_event_update_userpage" },
	{ 0x53b954a2, "up_read" },
	{ 0xeaf7a216, "drm_gem_prime_fd_to_handle" },
	{ 0xd0bd487b, "hdmi_drm_infoframe_pack_only" },
	{ 0xaca9712e, "drm_dp_mst_get_port_malloc" },
	{ 0x98f4192d, "ttm_bo_init_mm" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0xd7491936, "drm_gem_object_release" },
	{ 0x66ca92dd, "dma_buf_put" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x46de338, "drm_crtc_helper_set_mode" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x5a921311, "strncmp" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0xe7c8c1c, "drm_fb_helper_alloc_fbi" },
	{ 0xb0710411, "drm_sched_job_init" },
	{ 0x289bb537, "ttm_populate_and_map_pages" },
	{ 0xbdc42f20, "drm_mode_crtc_set_gamma_size" },
	{ 0x349cc11, "device_match_name" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c1ea5ee, "pci_map_rom" },
	{ 0x5dea222d, "vga_switcheroo_client_fb_set" },
	{ 0xb0e602eb, "memmove" },
	{ 0xaa46b3af, "drm_sched_dependency_optimized" },
	{ 0x4cc3d014, "ttm_bo_pipeline_move" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x9213f5c3, "drm_edid_to_speaker_allocation" },
	{ 0x8ec64a1f, "drm_atomic_commit" },
	{ 0xccc1c32d, "drm_connector_attach_vrr_capable_property" },
	{ 0x3cde5b42, "drm_gem_prime_handle_to_fd" },
	{ 0xd986eb1f, "ttm_bo_init_reserved" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x9871f69a, "drm_plane_create_blend_mode_property" },
	{ 0x7ea1ddbd, "drm_sched_init" },
	{ 0xc5c99a79, "drm_dp_get_adjust_request_voltage" },
	{ 0x71deb539, "request_firmware" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x7169236d, "__drm_atomic_helper_connector_reset" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe9688ca8, "drm_sched_suspend_timeout" },
	{ 0x494988ad, "vga_switcheroo_register_client" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x5fa35efe, "ttm_sg_tt_init" },
	{ 0x70691c99, "single_open" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5f52441b, "perf_pmu_unregister" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x75eee723, "drm_crtc_vblank_count" },
	{ 0x44c7f97d, "drm_sched_fault" },
	{ 0x582f248e, "drm_dp_get_adjust_request_pre_emphasis" },
	{ 0xa5433176, "ttm_bo_move_ttm" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xa44721c6, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0x52e78fe0, "drm_sched_entity_push_job" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x1fb4f743, "drm_crtc_vblank_on" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5f18a70b, "drm_gem_prime_export" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x13f26ae, "dma_fence_get_stub" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x471bc30, "vm_mmap" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x35632488, "drm_cvt_mode" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8d701329, "drm_dp_clock_recovery_ok" },
	{ 0x5e7bce08, "drm_prime_gem_destroy" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0x62b61dd4, "drm_modeset_lock" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0xda52bfc8, "drm_dev_alloc" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xdf611493, "drm_atomic_helper_resume" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x4e5b8e14, "ttm_bo_manager_func" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x5c84462b, "__put_task_struct" },
	{ 0x7bde0ea1, "ttm_bo_move_memcpy" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x97a261d0, "drm_atomic_get_crtc_state" },
	{ 0x154a14f5, "bpf_trace_run5" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x9e6b7219, "bpf_trace_run6" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xb56c8444, "drm_syncobj_create" },
	{ 0xdd683156, "drm_fb_helper_fini" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x563dd3a3, "sync_file_create" },
	{ 0x1501a5e4, "drm_property_create_enum" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0xca9360b5, "rb_next" },
	{ 0x701ac435, "mmu_notifier_put" },
	{ 0x9b0e771e, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x6654dc34, "drm_modeset_unlock_all" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x7277a551, "drm_atomic_helper_update_legacy_modeset_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbabe3d6e, "drm_gem_dmabuf_mmap" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x3dbd6e75, "ww_mutex_unlock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0xba946493, "ttm_bo_clean_mm" },
	{ 0xa9a66bd3, "pcie_get_readrq" },
	{ 0x6a0c2d81, "drm_fb_helper_unregister_fbi" },
	{ 0xc5850110, "printk" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xa8cee1ff, "ttm_bo_add_to_lru" },
	{ 0xd715f8ab, "__mmdrop" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xed25bfaf, "drm_fb_helper_output_poll_changed" },
	{ 0xaf47b805, "iommu_iova_to_phys" },
	{ 0x6aa3c338, "drm_get_format_info" },
	{ 0xc1e4ce16, "unuse_mm" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0xcd0035bd, "amd_iommu_device_info" },
	{ 0x96c06bfc, "kthread_park" },
	{ 0x334194f, "drm_mode_duplicate" },
	{ 0xf330301a, "drm_get_edid" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0xb8d03996, "drm_gem_dmabuf_vmap" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e51cd74, "swiotlb_nr_tbl" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xf89a4f03, "drm_crtc_handle_vblank" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xec119b5c, "drm_dp_mst_connector_late_register" },
	{ 0x86e50109, "drm_atomic_helper_update_plane" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x16e70a64, "drm_fb_helper_setcmap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x52fd0cf7, "drm_modeset_lock_all_ctx" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x3be4dd16, "drm_is_current_master" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0xedcf81ce, "drm_dp_channel_eq_ok" },
	{ 0x412a98b2, "drm_dp_mst_reset_vcpi_slots" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0xdb9b0051, "drm_dp_mst_topology_mgr_set_mst" },
	{ 0x7c2d1b18, "drm_atomic_private_obj_init" },
	{ 0xed3b6bc3, "drm_mode_is_420_also" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,gpu-sched,ttm,amd_iommu_v2,i2c-algo-bit");

MODULE_ALIAS("pci:v00001002d00006780sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006784sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006788sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000678Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006790sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006791sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006792sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006798sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006799sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006816sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006623sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006631sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006826sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006829sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006664sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006667sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000666Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001305sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001316sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001317sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006658sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009832sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009833sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009836sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009851sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009853sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009854sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009855sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009856sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009857sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009858sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009859sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006901sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006907sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006929sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006938sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006939sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000730Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009874sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009875sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009876sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000098E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067FFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006FDFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006986sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006987sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006995sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006997sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000699Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006860sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006861sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006862sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006863sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006864sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006867sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006868sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006869sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000687Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000734Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001636sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007362sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3F0521EDEF1B66022BDB9BA");
