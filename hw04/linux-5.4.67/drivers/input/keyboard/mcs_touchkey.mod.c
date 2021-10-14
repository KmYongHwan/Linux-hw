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
	{ 0xff76d558, "input_register_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5ada0011, "input_event" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mcs5000_touchkey");
MODULE_ALIAS("i2c:mcs5080_touchkey");

MODULE_INFO(srcversion, "ADD0EC96DEECC7386898CBF");
