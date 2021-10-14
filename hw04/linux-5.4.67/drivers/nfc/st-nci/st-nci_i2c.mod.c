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
	{ 0xd3f298bf, "ndlc_probe" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xe1a1645d, "ndlc_recv" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe4f42565, "ndlc_remove" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "st-nci");

MODULE_ALIAS("acpi*:SMO2101:*");
MODULE_ALIAS("acpi*:SMO2102:*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-i2cC*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb_i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcb_i2cC*");
MODULE_ALIAS("of:N*T*Cst,st21nfcc-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcc-i2cC*");
MODULE_ALIAS("i2c:st_nci");

MODULE_INFO(srcversion, "DEA67E48F5CE27415F42049");
