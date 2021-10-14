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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84d9aad6, "dlmunlock" },
	{ 0x7a1211f8, "dlm_setup_eviction_cb" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0xb908b583, "dlm_register_eviction_cb" },
	{ 0xe9bb65e3, "dlm_register_domain" },
	{ 0xb678b970, "dlm_unregister_domain" },
	{ 0xc5850110, "printk" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd8fa57a6, "dlm_unregister_eviction_cb" },
	{ 0xf1252a24, "ocfs2_stack_glue_unregister" },
	{ 0xd859ac8c, "o2net_fill_node_map" },
	{ 0x46a174ff, "ocfs2_stack_glue_register" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x20581037, "dlmlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0xc3f6f20f, "dlm_print_one_lock" },
};

MODULE_INFO(depends, "ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue");


MODULE_INFO(srcversion, "54D6EF1D13BD7F89FB54DDF");
