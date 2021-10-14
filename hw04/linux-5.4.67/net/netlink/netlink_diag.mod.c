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
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0x840bfa23, "sock_diag_put_meminfo" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0x5c6db02d, "sock_diag_unregister" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x9acc3fe7, "sock_diag_register" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x15981c33, "nl_table" },
	{ 0xa731f387, "nl_table_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0x37a0cba, "kfree" },
	{ 0x33713d5b, "sock_diag_save_cookie" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2b0861, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6927D99B8A924BC14296E48");
