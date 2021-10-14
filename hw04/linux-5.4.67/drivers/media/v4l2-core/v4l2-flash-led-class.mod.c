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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xeedff878, "led_sysfs_disable" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x60ce2e2, "led_set_flash_brightness" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x29301841, "led_get_flash_fault" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1f562a1b, "led_set_brightness_sync" },
	{ 0x23831130, "fwnode_handle_get" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf75a75c3, "v4l2_fh_is_singular" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1731cc6, "led_set_flash_timeout" },
	{ 0x2509742, "led_update_brightness" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51c3b171, "led_update_flash_brightness" },
	{ 0xe31b2c85, "v4l2_subdev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x4950ff6a, "led_trigger_remove" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0xcc3d5598, "led_sysfs_enable" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "videodev,led-class-flash,mc");


MODULE_INFO(srcversion, "0E980667C5B982B8CA84347");
