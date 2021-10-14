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
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xfa2d291c, "drm_mode_get_hv_timing" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc344af18, "drm_release" },
	{ 0x5d2f4e2d, "drm_plane_create_color_properties" },
	{ 0x5e7bce08, "drm_prime_gem_destroy" },
	{ 0xfe5ffe4a, "drm_fb_helper_set_par" },
	{ 0x34444d70, "ttm_pool_populate" },
	{ 0x252f8658, "drm_fb_helper_ioctl" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6de948c6, "ttm_bo_eviction_valuable" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0x31f499e6, "drm_invalid_op" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x76673ff4, "drm_plane_create_zpos_immutable_property" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x71aaadfc, "drm_dp_update_payload_part1" },
	{ 0xa484f48, "ttm_dma_tt_init" },
	{ 0xb9560d7f, "drm_crtc_helper_set_config" },
	{ 0xf088322, "drm_dev_register" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0xe27e3128, "drm_atomic_helper_suspend" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x325dcade, "agp_backend_release" },
	{ 0xa2393307, "drm_helper_resume_force_mode" },
	{ 0xdf3a8caf, "drm_dp_dpcd_write" },
	{ 0x8b6e69a6, "regulator_set_voltage" },
	{ 0xf330301a, "drm_get_edid" },
	{ 0x86e50109, "drm_atomic_helper_update_plane" },
	{ 0x3b2ff0d2, "drm_crtc_arm_vblank_event" },
	{ 0xa7a4258e, "drm_fb_helper_cfb_fillrect" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x349cba85, "strchr" },
	{ 0x6af9ad1a, "drm_calc_vbltimestamp_from_scanoutpos" },
	{ 0x7bde0ea1, "ttm_bo_move_memcpy" },
	{ 0xda52bfc8, "drm_dev_alloc" },
	{ 0x70691c99, "single_open" },
	{ 0xbfce8b8a, "drm_fb_helper_initial_config" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0x6a460dc5, "schedule_hrtimeout" },
	{ 0x29434677, "ttm_bo_put" },
	{ 0x98a7ace4, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x4714bdcc, "drm_dp_cec_unset_edid" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xdf611493, "drm_atomic_helper_resume" },
	{ 0x9b55ed4a, "pci_unmap_rom" },
	{ 0x42851e30, "drm_atomic_helper_wait_for_dependencies" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x9871f69a, "drm_plane_create_blend_mode_property" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0x74c91105, "pci_disable_rom" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x89210351, "drm_crtc_from_index" },
	{ 0xcd5e0782, "drm_atomic_helper_wait_for_fences" },
	{ 0xf11a9792, "drm_atomic_helper_commit_hw_done" },
	{ 0x6b392142, "ttm_bo_move_to_lru_tail" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0xca391157, "ttm_bo_move_accel_cleanup" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xba3039d3, "drm_atomic_helper_page_flip" },
	{ 0x7ba8b89, "iommu_map" },
	{ 0x77a8b9f4, "drm_mode_destroy" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xe26032eb, "mxm_wmi_call_mxmx" },
	{ 0xeec76af8, "drm_dp_cec_register_connector" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x97a2d765, "ttm_bo_validate" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x36ad1990, "drm_property_create_range" },
	{ 0x3b60e855, "drm_atomic_helper_swap_state" },
	{ 0x244d8dd2, "drm_dp_mst_topology_mgr_resume" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xe98d3b51, "ttm_bo_init" },
	{ 0x67d1bd2f, "drm_fb_helper_debug_leave" },
	{ 0x40e253ec, "vga_switcheroo_register_handler" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x1a63af34, "vga_switcheroo_process_delayed_switch" },
	{ 0xaca9712e, "drm_dp_mst_get_port_malloc" },
	{ 0x2710f212, "ttm_dma_unpopulate" },
	{ 0x35632488, "drm_cvt_mode" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xf89a4f03, "drm_crtc_handle_vblank" },
	{ 0x349ac524, "__tracepoint_dma_fence_emit" },
	{ 0x254cb85a, "agp_copy_info" },
	{ 0x139f30b9, "drm_dp_cec_unregister_connector" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0xdb9b0051, "drm_dp_mst_topology_mgr_set_mst" },
	{ 0xf054e000, "drm_plane_init" },
	{ 0x518eb8ca, "__drm_atomic_helper_crtc_reset" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x41b0b9cc, "dput" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x40e1d018, "drm_crtc_vblank_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x98d87b25, "pci_get_class" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa47826e4, "drm_dp_calc_pbn_mode" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x609b2853, "hdmi_infoframe_pack" },
	{ 0xc7ed4c04, "led_classdev_resume" },
	{ 0x7158a176, "drm_kms_helper_hotplug_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xbd8ea782, "drm_plane_force_disable" },
	{ 0x5da2f84b, "drm_dp_mst_topology_mgr_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0xebc59434, "drm_vblank_init" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xa5b8a17e, "drm_encoder_init" },
	{ 0x7cf40c31, "drm_dp_mst_hpd_irq" },
	{ 0x2041b891, "drm_object_property_set_value" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xae616bd2, "drm_connector_list_iter_next" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9f1cabdb, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7b3c31dc, "drm_crtc_enable_color_mgmt" },
	{ 0xd5d3550f, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x66551bc7, "drm_detect_monitor_audio" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x13ce2e5d, "drm_universal_plane_init" },
	{ 0x1162e37d, "drm_dp_mst_allocate_vcpi" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9b0e771e, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x6a0c2d81, "drm_fb_helper_unregister_fbi" },
	{ 0xfd94814e, "complete_all" },
	{ 0xece784c2, "rb_first" },
	{ 0xa44721c6, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xc631580a, "console_unlock" },
	{ 0xf8f7495d, "ttm_dma_populate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x40285d52, "drm_fb_helper_pan_display" },
	{ 0x7277a551, "drm_atomic_helper_update_legacy_modeset_state" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb3e43376, "drm_atomic_helper_set_config" },
	{ 0xb13f8f73, "__get_task_comm" },
	{ 0xea7abc28, "vga_switcheroo_unregister_client" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4a00c723, "drm_plane_create_alpha_property" },
	{ 0x81c1d15d, "drm_dp_mst_deallocate_vcpi" },
	{ 0x11b079dd, "drm_dp_check_act_status" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0x9a884d5f, "drm_helper_connector_dpms" },
	{ 0xccf71a42, "drm_fb_helper_set_suspend" },
	{ 0xca161191, "drm_dev_put" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x26a29f8a, "dma_resv_wait_timeout_rcu" },
	{ 0x12a8758d, "vga_switcheroo_client_probe_defer" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0xba90a6eb, "drm_fb_helper_cfb_copyarea" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xa33ab01d, "drm_mode_copy" },
	{ 0xf10de535, "ioread8" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0x48193639, "acpi_lid_open" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x5482e4ac, "drm_dev_unregister" },
	{ 0x11089ac7, "_ctype" },
	{ 0x9e27667, "drm_atomic_helper_commit_cleanup_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x21a97444, "drm_prime_pages_to_sg" },
	{ 0xe2503482, "drm_mode_create_dvi_i_properties" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xa8cee1ff, "ttm_bo_add_to_lru" },
	{ 0x4c92e6b2, "__drm_atomic_helper_plane_reset" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x2a67aba5, "drm_crtc_vblank_put" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2bec40d1, "drm_helper_mode_fill_fb_struct" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x4f59052c, "drm_object_attach_property" },
	{ 0x86f17a7a, "drm_atomic_state_default_release" },
	{ 0xb882a6ad, "drm_atomic_helper_prepare_planes" },
	{ 0x50413763, "dma_resv_add_shared_fence" },
	{ 0x334194f, "drm_mode_duplicate" },
	{ 0xbddfe7b1, "drm_mode_create_tv_properties" },
	{ 0x9eb05522, "drm_i2c_encoder_mode_fixup" },
	{ 0x3d71be18, "drm_crtc_init_with_planes" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0xbdc14038, "drm_atomic_helper_check_plane_state" },
	{ 0x8109c6d8, "drm_gem_handle_create" },
	{ 0x412a98b2, "drm_dp_mst_reset_vcpi_slots" },
	{ 0x56530b5c, "vmap" },
	{ 0x8c1ea5ee, "pci_map_rom" },
	{ 0xbf35eed, "drm_gem_object_put_unlocked" },
	{ 0x1fb4f743, "drm_crtc_vblank_on" },
	{ 0xffb7c514, "ida_free" },
	{ 0x91b117a8, "ttm_bo_kmap" },
	{ 0x12575b73, "drm_i2c_encoder_restore" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xde698887, "drm_atomic_state_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x422a90d3, "ttm_bo_evict_mm" },
	{ 0x1be9e0ed, "ww_mutex_lock" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x38402a73, "drm_dp_cec_set_edid" },
	{ 0xca47268a, "drm_i2c_encoder_detect" },
	{ 0x5e51cd74, "swiotlb_nr_tbl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa50ec423, "vga_client_register" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x34d5237f, "drm_dp_mst_topology_mgr_suspend" },
	{ 0xd7491936, "drm_gem_object_release" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xdf5890e1, "ttm_tt_bind" },
	{ 0xb245c251, "drm_read" },
	{ 0x1e81f408, "ttm_bo_dma_acc_size" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x752832c, "noop_llseek" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x9cb6a08f, "iommu_unmap" },
	{ 0xce6fe5e6, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0x7169236d, "__drm_atomic_helper_connector_reset" },
	{ 0xc9aba36a, "drm_dp_atomic_release_vcpi_slots" },
	{ 0xf772035d, "drm_property_add_enum" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x1e99399d, "hwmon_device_register_with_info" },
	{ 0xb3fcf169, "drm_dp_atomic_find_vcpi_slots" },
	{ 0x9d7d3223, "vga_switcheroo_lock_ddc" },
	{ 0xdd623a59, "drm_dp_aux_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x98f4192d, "ttm_bo_init_mm" },
	{ 0x3271e595, "ttm_bo_wait" },
	{ 0xd2188866, "ttm_bo_device_init" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12f57959, "drm_debugfs_create_files" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x44403596, "drm_connector_init" },
	{ 0x72f80faa, "drm_kms_helper_poll_enable" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4bd2b91a, "drm_fb_helper_prepare" },
	{ 0x794101b4, "pci_platform_rom" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x14ba974f, "debugfs_lookup" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0x20645642, "drm_debug" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xf822cbac, "ttm_bo_mem_space" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x97a261d0, "drm_atomic_get_crtc_state" },
	{ 0x90a5c549, "drm_dp_mst_atomic_check" },
	{ 0xeaf7a216, "drm_gem_prime_fd_to_handle" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb26bf25d, "drm_mode_set_crtcinfo" },
	{ 0xd152c21c, "drm_plane_cleanup" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0xed25bfaf, "drm_fb_helper_output_poll_changed" },
	{ 0xc2ad51cc, "drm_atomic_helper_legacy_gamma_set" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5c179e46, "ttm_bo_mem_put" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd94f3fb8, "drm_connector_list_iter_end" },
	{ 0xf7a2d718, "drm_mode_create_scaling_mode_property" },
	{ 0xf2f5083d, "__drm_atomic_helper_plane_destroy_state" },
	{ 0xf1b00237, "pci_enable_rom" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0xcb543539, "ttm_agp_tt_unpopulate" },
	{ 0x5d9342e0, "ttm_bo_del_sub_from_lru" },
	{ 0xc8734d8, "dma_resv_reserve_shared" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1cfc7690, "drm_fb_helper_check_var" },
	{ 0x97767442, "vga_switcheroo_fini_domain_pm_ops" },
	{ 0xb52b74ed, "drm_fb_helper_blank" },
	{ 0x322d6ef6, "drm_dp_mst_put_port_malloc" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa3e91a34, "drm_dp_mst_get_edid" },
	{ 0xbfe82994, "ttm_bo_kunmap" },
	{ 0x5dea222d, "vga_switcheroo_client_fb_set" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x46de338, "drm_crtc_helper_set_mode" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0x521c94e8, "drm_mode_debug_printmodeline" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x56256e8a, "orderly_poweroff" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd05a4f64, "drm_crtc_accurate_vblank_count" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xf67cd955, "vga_switcheroo_unlock_ddc" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0xc12c4f0, "drm_gem_object_lookup" },
	{ 0x338a5c40, "drm_crtc_vblank_get" },
	{ 0xbb8e169a, "vga_switcheroo_handler_flags" },
	{ 0x5bd4320c, "drm_fb_helper_hotplug_event" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x86b0d988, "drm_gem_handle_delete" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb5e5c757, "drm_mode_object_put" },
	{ 0xf979e3be, "drm_dp_mst_topology_mgr_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xa8673daf, "drm_plane_create_zpos_property" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xacc48f18, "agp_backend_acquire" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x4594c22c, "drm_scdc_read" },
	{ 0xba259238, "ttm_agp_tt_populate" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa8ad5d01, "drm_detect_hdmi_monitor" },
	{ 0xe7c8c1c, "drm_fb_helper_alloc_fbi" },
	{ 0x7547bceb, "drm_atomic_helper_setup_commit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa00e8f2d, "drm_primary_helper_funcs" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3cde5b42, "drm_gem_prime_handle_to_fd" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0xf4e4ff7a, "acpi_video_get_edid" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x90b695aa, "drm_connector_unregister" },
	{ 0xfa7b757d, "drm_gem_object_init" },
	{ 0xc92f5b0c, "drm_encoder_cleanup" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2e204eff, "ttm_bo_device_release" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xa4e2ae60, "drm_fb_helper_fill_info" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0x29d3685d, "drm_connector_list_iter_begin" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe1dbad95, "drm_crtc_cleanup" },
	{ 0x81b1073c, "drm_get_edid_switcheroo" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xb2c13ede, "i2c_bit_algo" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xdccabc29, "ttm_dma_tt_fini" },
	{ 0x94961283, "vunmap" },
	{ 0x789ba01e, "drm_helper_hpd_irq_event" },
	{ 0x12d61d34, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x494988ad, "vga_switcheroo_register_client" },
	{ 0x3dbd6e75, "ww_mutex_unlock" },
	{ 0x1dfdd782, "refcount_dec_and_mutex_lock" },
	{ 0xa5433176, "ttm_bo_move_ttm" },
	{ 0x9c8d1457, "drm_mode_equal" },
	{ 0x3242dfa5, "drm_connector_set_path_property" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xa2a2b6f6, "drm_fb_helper_cfb_imageblit" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x232b5238, "mxm_wmi_supported" },
	{ 0x9d19883e, "led_classdev_suspend" },
	{ 0x180cfb56, "drm_atomic_helper_cleanup_planes" },
	{ 0x6cf53c51, "agp_enable" },
	{ 0x98c5d297, "drm_atomic_state_default_clear" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x231c0533, "drm_i2c_encoder_save" },
	{ 0xc5534d64, "ioread16" },
	{ 0x7934c628, "drm_atomic_helper_shutdown" },
	{ 0xdd683156, "drm_fb_helper_fini" },
	{ 0x61cdf799, "mxm_wmi_call_mxds" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xca9360b5, "rb_next" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x91c32917, "drm_atomic_helper_disable_plane" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x245e4356, "drm_prime_sg_to_page_addr_arrays" },
	{ 0xa3107bc2, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb1ee2cb, "drm_dp_update_payload_part2" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e5b8e14, "ttm_bo_manager_func" },
	{ 0x1d7b5e2b, "drm_helper_disable_unused_functions" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x45db69a7, "drm_atomic_add_affected_planes" },
	{ 0x16e70a64, "drm_fb_helper_setcmap" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5509dd3e, "ttm_agp_tt_create" },
	{ 0x8b7e46c2, "drm_property_create" },
	{ 0x772408b5, "firmware_request_nowarn" },
	{ 0x2c706892, "drm_framebuffer_init" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5cc3787, "drm_kms_helper_poll_init" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0x481d4452, "vga_switcheroo_init_domain_pm_ops" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe81dfea1, "ttm_pool_unpopulate" },
	{ 0x1ecd3c0b, "drm_dp_dpcd_read" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x637e69bb, "drm_dp_mst_detect_port" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xf880b830, "drm_dp_aux_register" },
	{ 0xc833597a, "pci_ignore_hotplug" },
	{ 0xbbdcd391, "drm_connector_register" },
	{ 0x5e67f327, "drm_helper_force_disable_all" },
	{ 0xb16826f7, "pci_d3cold_disable" },
	{ 0xf1af984b, "dma_resv_add_excl_fence" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xe1bbfc7, "drm_scdc_write" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xba946493, "ttm_bo_clean_mm" },
	{ 0x5a4734d1, "drm_kms_helper_is_poll_worker" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xbdc42f20, "drm_mode_crtc_set_gamma_size" },
	{ 0xf68e18d0, "drm_kms_helper_poll_disable" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x65c824e4, "drm_mode_object_find" },
	{ 0xede283d, "release_firmware" },
	{ 0x426abb86, "ww_mutex_lock_interruptible" },
	{ 0x12042686, "drm_fb_helper_debug_enter" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0x3d462fde, "drm_i2c_encoder_init" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf6556ca9, "drm_fb_helper_init" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x17515c67, "drm_kms_helper_poll_fini" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xede2149c, "drm_color_lut_extract" },
	{ 0xe914e41e, "strcpy" },
	{ 0x45f919dd, "drm_dp_cec_irq" },
	{ 0x5955b596, "drm_framebuffer_cleanup" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xfce82111, "ttm_bo_mmap" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,ttm,mxm-wmi,wmi,video,i2c-algo-bit");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v000012D2d*sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "8833F20C633E0C1C037793E");
