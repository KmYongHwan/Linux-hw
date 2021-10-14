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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xf617f799, "__quota_error" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x6f915a45, "dqstats" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5e6d920c, "make_kprojid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x404c4684, "mark_info_dirty" },
	{ 0x7ce18c9f, "from_kqid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A768E9352AEC6D8D697FCC0");
