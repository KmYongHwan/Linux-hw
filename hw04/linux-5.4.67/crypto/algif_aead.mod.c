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
	{ 0xcd42dfd7, "af_alg_poll" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0xbf3d0d20, "af_alg_release" },
	{ 0xc6f35803, "af_alg_unregister_type" },
	{ 0xe44df53c, "af_alg_register_type" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1a25e658, "af_alg_count_tsgl" },
	{ 0x3cfbad8a, "af_alg_wait_for_data" },
	{ 0x7616a3ce, "af_alg_wmem_wakeup" },
	{ 0x94fddef0, "af_alg_free_resources" },
	{ 0xc2e3aba0, "crypto_req_done" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x9b5845dd, "af_alg_async_cb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6f2b34fd, "af_alg_get_rsgl" },
	{ 0x1f1df509, "af_alg_alloc_areq" },
	{ 0xfa8ca34a, "af_alg_sendpage" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xc5f5d076, "crypto_get_default_null_skcipher" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x9699df20, "sock_kmalloc" },
	{ 0x848acea6, "af_alg_release_parent" },
	{ 0xa9fb365, "sock_kfree_s" },
	{ 0x566492d6, "sock_kzfree_s" },
	{ 0x10f22e9d, "af_alg_pull_tsgl" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x34e71629, "af_alg_sendmsg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "02540644328C27A95B4D571");
