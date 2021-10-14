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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x70691c99, "single_open" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xc4142837, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x493fceaf, "drm_dev_fini" },
	{ 0x392872de, "drm_fb_memcpy" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0xd73bff89, "drm_simple_display_pipe_init" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa33ab01d, "drm_mode_copy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x334194f, "drm_mode_duplicate" },
	{ 0x250741be, "drm_gem_fb_get_obj" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6154269c, "drm_fb_swab16" },
	{ 0x3797f6c0, "drm_gem_fb_create_with_dirty" },
	{ 0x3db9e734, "drm_atomic_helper_damage_merged" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x44403596, "drm_connector_init" },
	{ 0x85b7373, "spi_sync" },
	{ 0x20645642, "drm_debug" },
	{ 0xb51050a5, "dma_buf_begin_cpu_access" },
	{ 0xa7f013f9, "drm_dev_printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xa3107bc2, "drm_mode_probed_add" },
	{ 0xd91d9be6, "dma_buf_end_cpu_access" },
	{ 0x409d6b5, "drm_plane_enable_fb_damage_clips" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xcdf42add, "drm_dev_enter" },
	{ 0x63106ada, "drm_fb_xrgb8888_to_rgb565" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "21DDC0E5D6780DEBA566D41");
