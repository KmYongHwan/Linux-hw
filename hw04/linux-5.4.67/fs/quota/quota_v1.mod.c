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
	{ 0x7fdc590e, "unregister_quota_format" },
	{ 0x3bc313f3, "register_quota_format" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc5850110, "printk" },
	{ 0x53b954a2, "up_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x668b19a1, "down_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf617f799, "__quota_error" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x6f915a45, "dqstats" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5E1C0636CA475A8EBFFC8BD");
