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
	{ 0xf9a482f9, "msleep" },
	{ 0x42fa1319, "nfc_hci_recv_frame" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xde6bea6c, "st21nfca_hci_probe" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x6e2a7eb6, "st21nfca_hci_remove" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "hci,st21nfca_hci");

MODULE_ALIAS("i2c:st21nfca_hci");
MODULE_ALIAS("of:N*T*Cst,st21nfca-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfca-i2cC*");
MODULE_ALIAS("of:N*T*Cst,st21nfca_i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfca_i2cC*");
MODULE_ALIAS("acpi*:SMO2100:*");

MODULE_INFO(srcversion, "1B2636F5E478FC0CE75A022");
