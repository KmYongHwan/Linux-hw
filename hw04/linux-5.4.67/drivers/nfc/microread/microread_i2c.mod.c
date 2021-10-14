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
	{ 0x42fa1319, "nfc_hci_recv_frame" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc0ee08d6, "microread_probe" },
	{ 0xc5850110, "printk" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x41d96094, "microread_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "hci,microread");

MODULE_ALIAS("i2c:microread");

MODULE_INFO(srcversion, "ADE6EA5AE70D63096521658");
