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
	{ 0xc87daf8d, "rmi_register_transport_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x23260c3d, "rmi_dbg" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xae38b920, "rmi_unregister_transport_device" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x14ef3897, "rmi_driver_suspend" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6c7cbf19, "rmi_driver_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("i2c:rmi4_i2c");

MODULE_INFO(srcversion, "3411AB1DB5FC0834A761A26");
