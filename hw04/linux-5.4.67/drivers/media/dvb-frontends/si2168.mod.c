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
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xede283d, "release_firmware" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x71deb539, "request_firmware" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "5D564406F00A6C6C1B136D6");
