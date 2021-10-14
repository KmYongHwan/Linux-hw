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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc344af18, "drm_release" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf088322, "drm_dev_register" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0xc8be3289, "drm_gem_put_pages" },
	{ 0xabf29dca, "drm_calc_timestamping_constants" },
	{ 0x86e50109, "drm_atomic_helper_update_plane" },
	{ 0x3b2ff0d2, "drm_crtc_arm_vblank_event" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0xf11a9792, "drm_atomic_helper_commit_hw_done" },
	{ 0x4b98514a, "drm_set_preferred_mode" },
	{ 0xba3039d3, "drm_atomic_helper_page_flip" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xf89a4f03, "drm_crtc_handle_vblank" },
	{ 0x518eb8ca, "__drm_atomic_helper_crtc_reset" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0x40e1d018, "drm_crtc_vblank_off" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xebc59434, "drm_vblank_init" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xa5b8a17e, "drm_encoder_init" },
	{ 0x493fceaf, "drm_dev_fini" },
	{ 0xd5d3550f, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x13ce2e5d, "drm_universal_plane_init" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x9b0e771e, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xa44721c6, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xb3e43376, "drm_atomic_helper_set_config" },
	{ 0x46f5d4bc, "drm_gem_fb_prepare_fb" },
	{ 0xca161191, "drm_dev_put" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x5482e4ac, "drm_dev_unregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3d71be18, "drm_crtc_init_with_planes" },
	{ 0xbdc14038, "drm_atomic_helper_check_plane_state" },
	{ 0x250741be, "drm_gem_fb_get_obj" },
	{ 0xfef0539a, "drm_gem_fb_create" },
	{ 0x8109c6d8, "drm_gem_handle_create" },
	{ 0x56530b5c, "vmap" },
	{ 0xbf35eed, "drm_gem_object_put_unlocked" },
	{ 0x1fb4f743, "drm_crtc_vblank_on" },
	{ 0x344366d3, "shmem_read_mapping_page_gfp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd7491936, "drm_gem_object_release" },
	{ 0xb245c251, "drm_read" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xb5420dc8, "drm_atomic_helper_fake_vblank" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x44403596, "drm_connector_init" },
	{ 0x355375c, "drm_gem_vm_open" },
	{ 0xac976e64, "drm_gem_vm_close" },
	{ 0x97a261d0, "drm_atomic_get_crtc_state" },
	{ 0xd152c21c, "drm_plane_cleanup" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0x31ba46ca, "drm_gem_mmap" },
	{ 0xfcc09b10, "drm_atomic_helper_wait_for_vblanks" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0xf2f5083d, "__drm_atomic_helper_plane_destroy_state" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1d06f8c9, "drm_dev_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd05a4f64, "drm_crtc_accurate_vblank_count" },
	{ 0xc94b405e, "drm_atomic_helper_commit_modeset_disables" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0x338a5c40, "drm_crtc_vblank_get" },
	{ 0xb5e5c757, "drm_mode_object_put" },
	{ 0x7b71eb, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfa7b757d, "drm_gem_object_init" },
	{ 0xc92f5b0c, "drm_encoder_cleanup" },
	{ 0xe1dbad95, "drm_crtc_cleanup" },
	{ 0x9a03d10a, "drm_atomic_helper_commit_planes" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8698582f, "drm_mode_object_get" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x180cfb56, "drm_atomic_helper_cleanup_planes" },
	{ 0x7934c628, "drm_atomic_helper_shutdown" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x91c32917, "drm_atomic_helper_disable_plane" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x45db69a7, "drm_atomic_add_affected_planes" },
	{ 0x3f2018eb, "drm_gem_get_pages" },
	{ 0xbd351c9, "drm_atomic_helper_commit_modeset_enables" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x74523f34, "drm_crtc_add_crc_entry" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "217DBE5F2D849F0700BF3DC");
