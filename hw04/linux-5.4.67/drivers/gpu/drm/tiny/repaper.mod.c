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
	{ 0x6cb1d101, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0x3797f6c0, "drm_gem_fb_create_with_dirty" },
	{ 0xc344af18, "drm_release" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x6ae72823, "drm_gem_cma_mmap" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0xb245c251, "drm_read" },
	{ 0x752832c, "noop_llseek" },
	{ 0xe0d0cf5d, "drm_gem_cma_dumb_create" },
	{ 0x55e801ae, "drm_gem_prime_mmap" },
	{ 0xab1eddbe, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0xeaf7a216, "drm_gem_prime_fd_to_handle" },
	{ 0x3cde5b42, "drm_gem_prime_handle_to_fd" },
	{ 0xb44af4cd, "drm_cma_gem_create_object_default_funcs" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xd91d9be6, "dma_buf_end_cpu_access" },
	{ 0xf222794c, "drm_fb_xrgb8888_to_gray8" },
	{ 0xb51050a5, "dma_buf_begin_cpu_access" },
	{ 0x35a33ea7, "thermal_zone_get_temp" },
	{ 0xcdf42add, "drm_dev_enter" },
	{ 0x5d60857d, "drm_fb_cma_get_gem_obj" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3db9e734, "drm_atomic_helper_damage_merged" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x39ba3e44, "thermal_zone_get_zone_by_name" },
	{ 0xa7f013f9, "drm_dev_printk" },
	{ 0x297fa670, "drm_fbdev_generic_setup" },
	{ 0xf088322, "drm_dev_register" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0xd73bff89, "drm_simple_display_pipe_init" },
	{ 0x44403596, "drm_connector_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x6410207a, "devm_drm_dev_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x493fceaf, "drm_dev_fini" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xa3107bc2, "drm_mode_probed_add" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x334194f, "drm_mode_duplicate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xb70f1c44, "drm_dev_unplug" },
	{ 0x7934c628, "drm_atomic_helper_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "DCE22FE386A77C9AA01E15A");
