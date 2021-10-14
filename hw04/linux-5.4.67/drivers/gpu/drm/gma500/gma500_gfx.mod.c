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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc344af18, "drm_release" },
	{ 0xfe5ffe4a, "drm_fb_helper_set_par" },
	{ 0x252f8658, "drm_fb_helper_ioctl" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xb9560d7f, "drm_crtc_helper_set_config" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0x53b954a2, "up_read" },
	{ 0xa2393307, "drm_helper_resume_force_mode" },
	{ 0xc8be3289, "drm_gem_put_pages" },
	{ 0xf330301a, "drm_get_edid" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xa7a4258e, "drm_fb_helper_cfb_fillrect" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xbfce8b8a, "drm_fb_helper_initial_config" },
	{ 0xc5e74216, "release_resource" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x9b55ed4a, "pci_unmap_rom" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0x216e3eed, "vmf_insert_mixed" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0x78adaa4e, "drm_gem_fb_create_handle" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x77a8b9f4, "drm_mode_destroy" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x36ad1990, "drm_property_create_range" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x67d1bd2f, "drm_fb_helper_debug_leave" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0x40e1d018, "drm_crtc_vblank_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x63525ebb, "drm_gem_free_mmap_offset" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x999e8297, "vfree" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0xebc59434, "drm_vblank_init" },
	{ 0x2c7f1ef0, "set_pages_array_wc" },
	{ 0xa5b8a17e, "drm_encoder_init" },
	{ 0x2041b891, "drm_object_property_set_value" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x66551bc7, "drm_detect_monitor_audio" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6aa3c338, "drm_get_format_info" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x668b19a1, "down_read" },
	{ 0x6a0c2d81, "drm_fb_helper_unregister_fbi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x40285d52, "drm_fb_helper_pan_display" },
	{ 0x3f5ce95b, "drm_handle_vblank" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0x9a884d5f, "drm_helper_connector_dpms" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8f2b1e28, "drm_irq_install" },
	{ 0xba90a6eb, "drm_fb_helper_cfb_copyarea" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x2bec40d1, "drm_helper_mode_fill_fb_struct" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4f59052c, "drm_object_attach_property" },
	{ 0x334194f, "drm_mode_duplicate" },
	{ 0xa6adf8fd, "drm_put_dev" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0x8109c6d8, "drm_gem_handle_create" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x8c1ea5ee, "pci_map_rom" },
	{ 0xbf35eed, "drm_gem_object_put_unlocked" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0xd7491936, "drm_gem_object_release" },
	{ 0xb245c251, "drm_read" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0xf772035d, "drm_property_add_enum" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce807a25, "up_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x44403596, "drm_connector_init" },
	{ 0x4bd2b91a, "drm_fb_helper_prepare" },
	{ 0x355375c, "drm_gem_vm_open" },
	{ 0xac976e64, "drm_gem_vm_close" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8e2bb013, "drm_helper_crtc_in_use" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xb26bf25d, "drm_mode_set_crtcinfo" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0xed25bfaf, "drm_fb_helper_output_poll_changed" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x31ba46ca, "drm_gem_mmap" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x46b6963d, "set_pages_array_wb" },
	{ 0xcd729188, "i2c_add_numbered_adapter" },
	{ 0xf7a2d718, "drm_mode_create_scaling_mode_property" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0x53a4b685, "drm_framebuffer_unregister_private" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1cfc7690, "drm_fb_helper_check_var" },
	{ 0x74b2e11c, "drm_gem_private_object_init" },
	{ 0x6626d923, "drm_object_property_get_value" },
	{ 0xb52b74ed, "drm_fb_helper_blank" },
	{ 0x3b1ef69b, "drm_get_pci_dev" },
	{ 0x46de338, "drm_crtc_helper_set_mode" },
	{ 0x521c94e8, "drm_mode_debug_printmodeline" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x52afa80a, "set_pages_wb" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0xc12c4f0, "drm_gem_object_lookup" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xe7c8c1c, "drm_fb_helper_alloc_fbi" },
	{ 0xa8ad5d01, "drm_detect_hdmi_monitor" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x15188f60, "drm_crtc_init" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x90b695aa, "drm_connector_unregister" },
	{ 0xfa7b757d, "drm_gem_object_init" },
	{ 0xc92f5b0c, "drm_encoder_cleanup" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xa4e2ae60, "drm_fb_helper_fill_info" },
	{ 0xe1dbad95, "drm_crtc_cleanup" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x789ba01e, "drm_helper_hpd_irq_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0xa2a2b6f6, "drm_fb_helper_cfb_imageblit" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd5786321, "set_pages_uc" },
	{ 0xdd683156, "drm_fb_helper_fini" },
	{ 0x76c1fd24, "drm_modeset_lock_all" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0xa3107bc2, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6654dc34, "drm_modeset_unlock_all" },
	{ 0x1d7b5e2b, "drm_helper_disable_unused_functions" },
	{ 0x16e70a64, "drm_fb_helper_setcmap" },
	{ 0x8b7e46c2, "drm_property_create" },
	{ 0xf3124815, "drm_fb_helper_lastclose" },
	{ 0x2c706892, "drm_framebuffer_init" },
	{ 0x5cc3787, "drm_kms_helper_poll_init" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x61f0019a, "i2c_get_adapter" },
	{ 0x3f2018eb, "drm_gem_get_pages" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xbbdcd391, "drm_connector_register" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xbdc42f20, "drm_mode_crtc_set_gamma_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x5078ccb2, "vmf_insert_pfn" },
	{ 0x12042686, "drm_fb_helper_debug_enter" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0xf6556ca9, "drm_fb_helper_init" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x17515c67, "drm_kms_helper_poll_fini" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x95f3879f, "drm_gem_fb_destroy" },
	{ 0x5955b596, "drm_framebuffer_cleanup" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,video,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00008108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "169F3EC0AA066B6CBDC4A4B");
