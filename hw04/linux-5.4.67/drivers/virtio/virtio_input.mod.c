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
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0xd66cd0b1, "register_virtio_driver" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf154fe, "virtqueue_get_vring_size" },
	{ 0x5ada0011, "input_event" },
	{ 0x3f567be1, "virtqueue_add_inbuf" },
	{ 0x747ba3cd, "virtqueue_kick" },
	{ 0xbdfe9390, "virtqueue_add_outbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5cdf37d0, "virtqueue_detach_unused_buf" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000012v*");

MODULE_INFO(srcversion, "3C9C18D25733B492A556B57");
