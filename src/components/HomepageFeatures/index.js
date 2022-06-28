import React from 'react';
import clsx from 'clsx';
import styles from './styles.module.css';

const FeatureList = [
  {
    title: 'Crear',
    Svg: require('@site/static/img/create.svg').default,
    description: (
      <>
        Programar es crear soluciones. Resolver problemas
        pondrá a prueba tu imaginación.
      </>
    ),
  },
  {
    title: 'Expresar',
    Svg: require('@site/static/img/js.svg').default,
    description: (
      <>
        Programar es expresar tus ideas en nuevo lenguaje: C++.
      </>
    ),
  },
  {
    title: 'Saber',
    Svg: require('@site/static/img/science.svg').default,
    description: (
      <>
        La Ciencia de la Computación tiene su laboratorio (la CPU)
        y sus experimentos (los programas).
      </>
    ),
  },
];

function Feature({Svg, title, description}) {
  return (
    <div className={clsx('col col--4')}>
      <div className="text--center">
        <Svg className={styles.featureSvg} role="img" />
      </div>
      <div className="text--center padding-horiz--md">
        <h3>{title}</h3>
        <p>{description}</p>
      </div>
    </div>
  );
}

export default function HomepageFeatures() {
  return (
    <section className={styles.features}>
      <div className="container">
        <div className="row">
          {FeatureList.map((props, idx) => (
            <Feature key={idx} {...props} />
          ))}
        </div>
      </div>
    </section>
  );
}
