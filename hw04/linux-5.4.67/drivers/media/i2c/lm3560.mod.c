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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc,videodev");

MODULE_ALIAS("i2c:lm3559");
MODULE_ALIAS("i2c:lm3560");

MODULE_INFO(srcversion, "DAB8B63DA6A38BD42378BBE");
