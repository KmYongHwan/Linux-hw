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
	{ 0xfe4752a0, "nfcmrvl_nci_unregister_dev" },
	{ 0x25e9cbaa, "nfcmrvl_nci_recv_frame" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x5b6b42ec, "nfcmrvl_parse_dt" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x233f20fc, "nfcmrvl_nci_register_dev" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "nfcmrvl");

MODULE_ALIAS("i2c:nfcmrvl_i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2cC*");

MODULE_INFO(srcversion, "69950B6A031B106680B8FE4");
