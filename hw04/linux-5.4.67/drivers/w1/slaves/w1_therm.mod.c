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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xab334ebf, "w1_unregister_family" },
	{ 0xa02639dc, "w1_register_family" },
	{ 0xc5850110, "printk" },
	{ 0xa0f3a603, "w1_reset_bus" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0xf765945, "w1_read_block" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x83c17c53, "w1_next_pullup" },
	{ 0xccb61200, "w1_read_8" },
	{ 0x13cb80df, "w1_write_8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xde3f3b95, "w1_reset_select_slave" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "B3AEACAACC5A3C40E1F3FEC");
