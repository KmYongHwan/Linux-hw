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
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xd514f762, "snd_ak4117_reinit" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xc4142837, "seq_printf" },
	{ 0xef71b05f, "snd_ak4117_check_rate_and_errors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0xeeed1690, "snd_ak4117_create" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x9f3236cb, "snd_ak4117_build" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x729a7be5, "snd_card_free_when_closed" },
	{ 0x8f991301, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x3090144a, "snd_ak4117_external_rate" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeac73847, "irq_regs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x65523885, "snd_card_new" },
	{ 0x5855a5b7, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17965496, "snd_ak4117_reg_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x19fe29ed, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "pcmcia,snd-ak4117,snd-pcm,snd");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa396D19D2pb71717B49pc*pd*");

MODULE_INFO(srcversion, "686A81BCAB216F1D64AC6D1");
