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
	{ 0x2d3385d3, "system_wq" },
	{ 0x42fa1319, "nfc_hci_recv_frame" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc5850110, "printk" },
	{ 0x5959be43, "pn544_hci_remove" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xb87a65c8, "nfc_fw_download_done" },
	{ 0x71deb539, "request_firmware" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xede283d, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
	{ 0x347cd8e0, "pn544_hci_probe" },
};

MODULE_INFO(depends, "hci,pn544,nfc");

MODULE_ALIAS("of:N*T*Cnxp,pn544-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn544-i2cC*");
MODULE_ALIAS("acpi*:NXP5440:*");
MODULE_ALIAS("i2c:pn544");

MODULE_INFO(srcversion, "6AD54626CE8856F18FB5541");
