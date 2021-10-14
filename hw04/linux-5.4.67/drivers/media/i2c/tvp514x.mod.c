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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:tvp5146");
MODULE_ALIAS("i2c:tvp5146m2");
MODULE_ALIAS("i2c:tvp5147");
MODULE_ALIAS("i2c:tvp5147m1");

MODULE_INFO(srcversion, "72B276AD239FA95C31777AA");
