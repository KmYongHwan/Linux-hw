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
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf2b4ea27, "gpiod_get_optional" },
	{ 0xe4413db4, "clk_get" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:rj54n1cb0c");

MODULE_INFO(srcversion, "E1B8840BD96CC5391A59085");
