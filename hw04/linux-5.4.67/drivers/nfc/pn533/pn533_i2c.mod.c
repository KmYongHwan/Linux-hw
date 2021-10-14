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
	{ 0xa2e379d4, "pn533_recv_frame" },
	{ 0x3c916cd4, "pn533_finalize_setup" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x9fb525d5, "pn533_unregister_device" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x1914e112, "pn533_register_device" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pn533");

MODULE_ALIAS("i2c:pn533_i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2cC*");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2cC*");

MODULE_INFO(srcversion, "C85399C30382F91047D7F35");
