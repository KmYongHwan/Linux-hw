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
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0xdc820989, "sock_no_sendmsg" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x3a943114, "sock_no_ioctl" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0xbf3d0d20, "af_alg_release" },
	{ 0xc6f35803, "af_alg_unregister_type" },
	{ 0xe44df53c, "af_alg_register_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x282e7ada, "crypto_stats_rng_generate" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0x6654f5f8, "crypto_alloc_rng" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xaec9674a, "crypto_rng_reset" },
	{ 0x848acea6, "af_alg_release_parent" },
	{ 0xa9fb365, "sock_kfree_s" },
	{ 0x9699df20, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "1A9116B6AA57428816DF37E");
