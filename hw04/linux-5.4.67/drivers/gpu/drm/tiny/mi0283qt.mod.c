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
	{ 0xe6cd6b2b, "mipi_dbi_pipe_update" },
	{ 0x350aee1a, "mipi_dbi_pipe_disable" },
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
	{ 0x5e45d6e2, "mipi_dbi_debugfs_init" },
	{ 0xb6009764, "mipi_dbi_release" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xa7f013f9, "drm_dev_printk" },
	{ 0x297fa670, "drm_fbdev_generic_setup" },
	{ 0xf088322, "drm_dev_register" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x67d5d2b9, "mipi_dbi_dev_init" },
	{ 0xeb19a4f8, "mipi_dbi_spi_init" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x2e7d85fb, "devm_of_find_backlight" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x6410207a, "devm_drm_dev_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xa8ae009c, "mipi_dbi_enable_flush" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b7af016, "mipi_dbi_command_stackbuf" },
	{ 0x480dd13e, "mipi_dbi_poweron_conditional_reset" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcdf42add, "drm_dev_enter" },
	{ 0xb70f1c44, "drm_dev_unplug" },
	{ 0x7934c628, "drm_atomic_helper_shutdown" },
	{ 0xb5d73ab5, "drm_mode_config_helper_suspend" },
	{ 0x98843005, "drm_mode_config_helper_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm_mipi_dbi,drm");

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "C116DA682C3C37E55E727EB");
