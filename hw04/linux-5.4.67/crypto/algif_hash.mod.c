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
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x3a943114, "sock_no_ioctl" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0xbf3d0d20, "af_alg_release" },
	{ 0xc6f35803, "af_alg_unregister_type" },
	{ 0xe44df53c, "af_alg_register_type" },
	{ 0x668c3dbc, "af_alg_make_sg" },
	{ 0xf5524491, "iov_iter_advance" },
	{ 0x971f6062, "af_alg_free_sg" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0x24d030e3, "crypto_ahash_finup" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf587fb54, "crypto_ahash_final" },
	{ 0xfb578fc5, "memset" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x7e8685, "crypto_ahash_setkey" },
	{ 0xc2e3aba0, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9699df20, "sock_kmalloc" },
	{ 0x848acea6, "af_alg_release_parent" },
	{ 0xa9fb365, "sock_kfree_s" },
	{ 0x566492d6, "sock_kzfree_s" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x345ce645, "af_alg_accept" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "762BF74770F24FC924DB3D6");
