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
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x5e6d920c, "make_kprojid" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa3a9b3dc, "qtree_entry_unused" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf617f799, "__quota_error" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fd33dcc, "qtree_read_dquot" },
	{ 0x7caf9a1d, "qtree_write_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0xb5b58439, "qtree_release_dquot" },
	{ 0x57bc19d2, "down_write" },
	{ 0x53b954a2, "up_read" },
	{ 0x7a87b859, "qtree_get_next_id" },
	{ 0x668b19a1, "down_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "81B75F317E09D6870778F36");
